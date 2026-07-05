#include<iostream>
#include <windows.h> //カーソル位置を移動する関数を使うために必要
using namespace std;

#define MAP_X 9
#define MAP_Y 9

COORD cursor_position;
HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

void Fx();
void Fy();
void Fz();

int map[MAP_Y][MAP_X] = {
    { 2, 1, 1, 1, 2, 1, 1, 1, 2 },
    { 1, 8, 8, 8, 1, 8, 1, 8, 1 },
    { 1, 1, 2, 8, 1, 8, 2, 8, 1 },
    { 1, 8, 8, 8, 1, 8, 8, 8, 1 },
    { 2, 1, 1, 1, 1, 1, 1, 1, 2 },
    { 1, 8, 8, 8, 1, 8, 8, 8, 1 },
    { 1, 8, 2, 8, 1, 8, 2, 1, 1 },
    { 1, 8, 1, 8, 1, 8, 8, 8, 1 },
    { 2, 1, 1, 1, 2, 1, 1, 1, 2 }
};

int Agent_X_Pos = 4;
int Agent_Y_Pos = 4;
int Agent_Direction = 1; //1：上，2：右，3：下，4：左

void Display() {  //表示する
    cursor_position.X = 0;
    cursor_position.Y = 0;
    SetConsoleCursorPosition(hStdout, cursor_position);
    for (int y = 0; y < MAP_Y; y++) {
        for (int x = 0; x < MAP_X; x++) {
            cout << map[y][x];
        }
        cout << "¥n";
    }
    cout << "¥n";
    for (int y = 0; y < MAP_Y; y++) {
        for (int x = 0; x < MAP_X; x++) {
            if (x == Agent_X_Pos && y == Agent_Y_Pos) {
                switch (Agent_Direction) {
                case 1: cout << "A"; break;
                case 2: cout << ">"; break;
                case 3: cout << "V"; break;
                case 4: cout << "<"; break;
                }
            }
            else {
                cout << "-";
            }
        }
        cout << "¥n";
    }
    Sleep(500); //500ミリ秒（0.5秒）停止，デバッグ時は変更OK
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

void Ff() {  //前に進む
    switch (Agent_Direction) {
    case 1: Agent_Y_Pos--; break;
    case 2: Agent_X_Pos++; break;
    case 3: Agent_Y_Pos++; break;
    case 4: Agent_X_Pos--; break;
    }
    if (Agent_X_Pos >= MAP_X || Agent_X_Pos < 0 || Agent_Y_Pos >= MAP_Y || Agent_Y_Pos < 0 || map[Agent_Y_Pos][Agent_X_Pos] == 8) {
        cout << "ゲームオーバー：終了時は何かを入力";
        cin >> Agent_X_Pos;
        exit(0);
    }
    Display();
}

void Fr() {  //右に向く
    Agent_Direction++;
    if (Agent_Direction == 5) {
        Agent_Direction = 1;
    }
    Display();
}

void Fl() {  //左に向く
    Agent_Direction--;
    if (Agent_Direction == 0) {
        Agent_Direction = 4;
    }
    Display();
}

void Fs() {  //色を変える
    Display();
    map[Agent_Y_Pos][Agent_X_Pos]++;
    if (map[Agent_Y_Pos][Agent_X_Pos] == 3) {
        map[Agent_Y_Pos][Agent_X_Pos] = 1;
    }
    Display();
    Clear_Check();
}

void Fx() {
        Fz();
        Fy();
        Fx();
}

void Fy() {
        Fr();
        Fs();
        Ff();
        Ff();
        Ff();
        Ff();

}

void Fz() {
        Fs();
        Ff();
        Ff();
        Fr();
        Ff();
        Ff();
        Fs();
        Fr();
        Fr();
        Ff();
        Ff();
        Fr();
        Ff();
        Ff();
}

int main() {
    Ff(); //サンプル
    Ff();
    Ff();
    Ff();
    Fr();
    Fx();
}