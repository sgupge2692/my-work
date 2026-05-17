//もう一回やる
#include <iostream>
#define N 10
using namespace std;

int main() {
    int nums[N];

    // 入力
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    int tmp = 0;

    // 1. 奇数を昇順にソート（奇数がある位置だけで順序を整える）
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 != 0) { // i番目が奇数のときだけ
            for (int j = i + 1; j < 10; j++) {
                if (nums[j] % 2 != 0 && nums[i] > nums[j]) {
                    tmp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = tmp;
                }
            }
        }
    }

    // 2. 偶数を降順にソート（偶数がある位置だけで順序を整える）
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) { // i番目が偶数のときだけ
            for (int j = i + 1; j < 10; j++) {
                if (nums[j] % 2 == 0 && nums[i] < nums[j]) {
                    tmp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = tmp;
                }
            }
        }
    }

    // 3. 出力：奇数を昇順に出力
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 != 0) {
            cout << nums[i] << ",";
        }
    }

    // 4. 出力：偶数を降順に出力
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) {
            cout << nums[i] << ",";
        }
    }

    return 0;
}