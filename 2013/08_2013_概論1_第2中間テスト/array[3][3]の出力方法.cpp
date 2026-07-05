#include <iostream>

using namespace std;

int main() {
    int i, j;
    char array[3][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'},
        {'g', 'h', 'i'}
    };

    for (i = 0; i < 3; i++) {
        // 1回目の表示
        for (j = 0; j < 3; j++) {
            cout << array[i][j];
        }
        cout << "\t"; // タブで区切る

        // 2回目の表示
        for (j = 0; j < 3; j++) {
            cout << array[2-i][2-j];
        }
        cout << "\t"; // タブで区切る

        // 3回目の表示
        for (j = 0; j < 3; j++) {
            cout << array[j][2-i];
        }
        cout << endl; // 行の終わりで改行
    }

    return 0;
}