#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

#define MAP_X 9
#define MAP_Y 9

void Fx();
void Fy();
void Fz();

int map[MAP_Y][MAP_X] = {
    { 2, 1, 1, 2, 1, 2, 1, 1, 2},
    { 1, 8, 8, 1, 1, 1, 8, 8, 1},
    { 1, 8, 8, 1, 1, 1, 8, 8, 1},
    { 2, 1, 1, 2, 1, 2, 1, 1, 2},
    { 1, 1, 1, 1, 1, 1, 1, 1, 1},
    { 2, 1, 1, 2, 1, 2, 1, 1, 2},
    { 1, 8, 8, 1, 1, 1, 8, 8, 1},
    { 1, 8, 8, 1, 1, 1, 8, 8, 1},
    { 2, 1, 1, 2, 1, 2, 1, 1, 2},
};

int Agent_X_Pos = 4;
int Agent_Y_Pos = 4;
int Agent_Direction = 2; // 1：上，2：右，3：下，4：左

void clearConsole() {
    // MacおよびLinux用のコンソールクリアシーケンス
    cout << "\033[2J\033[1;1H";
}

void Display() {
    // 表示処理
    clearConsole();
    for (int y = 0; y < MAP_Y; y++) {
        for (int x = 0; x < MAP_X; x++) {
            cout << map[y][x];
        }
        cout << "\n";
    }
    cout << "\n";

    for (int y = 0; y < MAP_Y; y++) {
        for (int x = 0; x < MAP_X; x++) {
            if (x == Agent_X_Pos && y == Agent_Y_Pos) {
                switch (Agent_Direction) {
                    case 1: cout << "A"; break;
                    case 2: cout << ">"; break;
                    case 3: cout << "V"; break;
                    case 4: cout << "<"; break;
                }
            } else {
                cout << "-";
            }
        }
        cout << "\n";
    }
    this_thread::sleep_for(chrono::milliseconds(500)); // 0.5秒停止
}

void Clear_Check() {
    int count = 0;
    for (int y = 0; y < MAP_Y; y++) {
        for (int x = 0; x < MAP_X; x++) {
            if (map[y][x] == 2) {
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "ゲームクリア：終了時は何かを入力";
        cin >> count;
        exit(0);
    }
}

void Ff() { // 前に進む
    switch (Agent_Direction) {
        case 1: Agent_Y_Pos--; break;
        case 2: Agent_X_Pos++; break;
        case 3: Agent_Y_Pos++; break;
        case 4: Agent_X_Pos--; break;
    }
    Display();
}

void Fr() { // 右に向く
    Agent_Direction++;
    if (Agent_Direction == 5) {
        Agent_Direction = 1;
    }
    Display();
}

void Fl() { // 左に向く
    Agent_Direction--;
    if (Agent_Direction == 0) {
        Agent_Direction = 4;
    }
    Display();
}

void Fs() { // 色を変える
    Display();
    map[Agent_Y_Pos][Agent_X_Pos]++;
    if (map[Agent_Y_Pos][Agent_X_Pos] == 3) {
        map[Agent_Y_Pos][Agent_X_Pos] = 1;
    }
    Display();
    Clear_Check();
}

void Fx() {
    Ff();
    Ff();
    Ff();
    Fs();
    Fr();
}

void Fy() {
    
}

void Fz() {
    Fx();
    Fx();
    Fx();
    Fx();
    Fl();
    Ff();
    Ff();
    Fz();
}


int main() {
    Ff();
    Fr();
    Ff();
    Fz();

    return 0;
}