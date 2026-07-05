#include <iostream>
using namespace std;

int main() {
    int data[9][9], x = 0, y = 0;
    for (int i = 1; i <= 81; i++) {
        data[y][x] = i;

        // --- ここに上記ロジックを挿入 ---
        if (y % 2 == 0) {
            if (x < 8) x++; else y++;
        } else {
            if (x > 0) x--; else y++;
        }
        // ------------------------------
    }

    // 出力用
    for (y = 0; y < 9; y++) {
        for (x = 0; x < 9; x++) {
            cout << data[y][x] << "\t";
        }
        cout << endl;
    }
    return 0;
}