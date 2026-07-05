#include <iostream>
#include <windows.h> //カーソル位置を移動する関数を使うために必要

using namespace std;
#define MAP_X 4
#define MAP_Y 10

COORD cursor_position;
HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

// 関数のプロトタイプ宣言
void Ff();
void Fr();
void Fl();
void Fs();
void Display();
void Clear_Check();
int Move_Check();

int map[10][4] = { { 1, 2, 2, 1 }, { 2, 8, 8, 8 }, { 2, 8, 8, 8 }, { 1, 2, 2, 1 }, { 2, 8, 8, 8 }, { 2, 8, 8, 8 }, { 1, 2, 2, 1 }, { 2, 8, 8, 8 }, { 2, 8, 8, 8 }, { 1, 2, 2, 1 } };
int Agent_X_Pos = 0;
int Agent_Y_Pos = 9;
int Agent_Direction = 2; //1：上，2：右，3：下，4：左

void Display() {  //表示する
    cursor_position.X = 0;
    cursor_position.Y = 0;
    SetConsoleCursorPosition(hStdout, cursor_position);
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
            } else if (map[y][x] == 8) {
                cout << "X";
            } else if (map[y][x] == 2) {
                cout << "O";
            } else {
                cout << "-";
            }
        }
        cout << "\n";
    }
    Sleep(500); //500ミリ秒停止
}

void Clear_Check() {
    int count = 0;
    for (int y = 0; y < MAP_Y; y++) {
        for (int x = 0; x < MAP_X; x++) {
            if (map[y][x] == 1) {
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "ゲームクリア：終了時は何かを入力";
        cin >> count; exit(0);
    }
}

int Move_Check() {
    if (Agent_X_Pos >= MAP_X || Agent_X_Pos < 0 || Agent_Y_Pos >= MAP_Y || Agent_Y_Pos < 0 || map[Agent_Y_Pos][Agent_X_Pos] == 8) {
        return 0;
    } else {
        return 1;
    }
}

void Ff() { //前に進む
    switch (Agent_Direction) {
        case 1: Agent_Y_Pos--; if (Move_Check() == 0) Agent_Y_Pos++; break;
        case 2: Agent_X_Pos++; if (Move_Check() == 0) Agent_X_Pos--; break;
        case 3: Agent_Y_Pos++; if (Move_Check() == 0) Agent_Y_Pos--; break;
        case 4: Agent_X_Pos--; if (Move_Check() == 0) Agent_X_Pos++; break;
    }
    Display();
}

void Fr() { //右に向く
    Agent_Direction++; if (Agent_Direction == 5) Agent_Direction = 1;
    Display();
}

void Fl() { //左に向く
    Agent_Direction--; if (Agent_Direction == 0) Agent_Direction = 4;
    Display();
}

void Fs() { //色を変える
    map[Agent_Y_Pos][Agent_X_Pos]++;
    if (map[Agent_Y_Pos][Agent_X_Pos] == 3) map[Agent_Y_Pos][Agent_X_Pos] = 2;
    Display();
    Clear_Check();
}

// ユーザー改変可能領域
void Fx() {
    // 例: 前進して色を変える
    Ff();
    Fs();
}

void Fy() {
    // 例: 右を向く
    Fr();
}

int main() {
    Display();
    // 実行したい処理をここに記述
    Fx();
    Fy();
    return 0;
}