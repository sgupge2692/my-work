#include <iostream>
#include <windows.h> // カーソル位置を移動する関数を使うために必要

using namespace std;

int main() {
    int array[4][4] = { 
        { 4, 12, 8, 16 }, 
        { 2, 6, 4, 8 }, 
        { 3, 9, 6, 12 }, 
        { 1, 3, 2, 4 } 
    };

    // ソート前の配列を表示
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl; // ここより上は改変不可

    // ここに適切なプログラムを作成しなさい
    // 列(j)を固定し、各列内の行(i)をバブルソートで並べ替える
    for (int j = 0; j < 4; j++) {
        for (int n = 0; n < 4; n++) {
            for (int i = 0; i < 3; i++) {
                if (array[i][j] > array[i + 1][j]) {
                    int tmp = array[i][j];
                    array[i][j] = array[i + 1][j];
                    array[i + 1][j] = tmp;
                }
            }
        }
    }
    // ここより下は改変不可

    cout << "列ごとに昇順（上から小さい順）にソート" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << ",";
        }
        cout << endl;
    }

    return 0; // main関数の終了時に0を返す
}