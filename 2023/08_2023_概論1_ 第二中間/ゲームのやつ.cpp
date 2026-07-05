#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define FIELD_SIZE_X    7
#define FIELD_SIZE_Y    7
#define PLAYER_VALUE    10

void initializeField(int field[FIELD_SIZE_Y][FIELD_SIZE_X]) {
    int elements[FIELD_SIZE_Y][FIELD_SIZE_X] = {
        {12, 33, 43, 20, 36, 6, 14},
        {19, 3, 17, 28, 16, 2, 4},
        {3, 3, 23, 46, 1, 10, 29},
        {5, 15, 3, 17, 9, 1, 29},
        {19, 19, 15, 13, 4, 27, 16},
        {11, 12, 39, 16, 24, 4, 12},
        {6, 10, 18, 29, 28, 21, 28}
    };
    for (int y = 0; y < FIELD_SIZE_Y; y++) {
        for (int x = 0; x < FIELD_SIZE_X; x++) {
            field[y][x] = elements[y][x];
        }
    }
}

void printField(const int field[FIELD_SIZE_Y][FIELD_SIZE_X], int playerX, int playerY, int power) {
    cout << endl;
    for (int y = 0; y < FIELD_SIZE_Y; y++) {
        for (int x = 0; x < FIELD_SIZE_X; x++) {
            if (y == playerY && x == playerX) {
                cout << "◆\t";
            } else {
                cout << field[y][x] << '\t';
            }
        }
        cout << '\n';
    }
    cout << '\n';
    cout << "現在のパワー：" << power << endl;
}

bool isGameOver(int nextX, int nextY, const int field[FIELD_SIZE_Y][FIELD_SIZE_X], int& power) {
    /*ここに回答を記入*/
    if(nextX>=7||nextY>=7||nextX<0||nextY<0||field[nextY][nextX]>power){
    cout << "ゲームオーバー\n";
    exit(0);
    }else{
        power+=field[nextY][nextX];
    }
    return false;
}

bool isGameClear(int power) {
    if (power >= 50) {
        cout << "ゲームクリア\n";
        exit(0);
    }
    return false;
}

void movePlayer(int field[FIELD_SIZE_Y][FIELD_SIZE_X], int& playerX, int& playerY, int direction, int& power) {
    field[playerY][playerX] = 0;  // 現在の位置を0にセット
    int nextX = playerX;
    int nextY = playerY;
    switch (direction) {
    case 0:  // 上
        --nextY;
        break;
    case 1:  // 左
        --nextX;
        break;
    case 2:  // 右
        ++nextX;
        break;
    case 3:  // 下
        ++nextY;
        break;
    default:
        cout << "0～3の数字を入力してください\n";
        return;
    }
    if (isGameOver(nextX, nextY, field, power)) {
        exit(0);
    }
    field[nextY][nextX] += PLAYER_VALUE;
    playerX = nextX;
    playerY = nextY;
}

int main() {
    int field[FIELD_SIZE_Y][FIELD_SIZE_X];
    int playerX, playerY;
    int power = 10;
    initializeField(field);
    printField(field, -1, -1, power);
    cout << "プレイヤーの初期位置を入力してください (x y): ";
    cin >> playerX >> playerY;
    isGameOver(playerX, playerY, field, power);
    printField(field, playerX, playerY, power);
    while (true) {
        // ゲームクリア判定
        isGameClear(power);
        cout << "進行方向を選択してください (0: 上, 1: 左, 2: 右, 3: 下): ";
        int direction;
        cin >> direction;
        movePlayer(field, playerX, playerY, direction, power);
        printField(field, playerX, playerY, power);
    }
    return 0;
}