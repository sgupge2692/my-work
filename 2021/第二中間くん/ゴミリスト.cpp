#include <iostream>

using namespace std;

int main() {
    int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int next[10] = {3, 5, 9, 1, 0, 2, 4, 8, 6, 7};
    int current, exchange;

    // 入れ替え前のリストの表示
    current = 0;
    for (int i = 0; i < 10; i++) {
        cout << list[current] << endl;
        current = next[current];
    }

    // 入れ替え処理の指定
    cin >> exchange;

    current = 0; // リストの先頭から開始
    for (int i = 0; i < 10; i++) {
        // 次のノードが入れ替えたいノード(exchange)なら、そこで作業開始
        if (next[current] == exchange) {
            int A = exchange;           // 入れ替えたいノード
            int B = next[A];            // その次のノード
            int C = next[B];            // Bのさらに次のノード

            // 付け替え作業（3本の矢印を張り替える）
            next[current] = B;          // 1. Aの前にBを繋ぐ
            next[B] = A;                // 2. Bの次にAを繋ぐ
            next[A] = C;                // 3. Aの次にCを繋ぐ
            
            break; // 終わったらループを抜ける
        }
        current = next[current];
    }
    /****************************************/

    // 入れ替え後のリスト表示（たどる順）
    cout << endl;
    current = 0;
    for (int i = 0; i < 10; i++) {
        cout << list[current] << endl;
        current = next[current];
    }

    // 配列そのものの表示
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << list[i] << endl;
    }

    return 0;
}