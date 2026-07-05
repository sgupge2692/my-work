//もう一回やる
#include <iostream>
using namespace std;

// 再帰を使ってnCrを計算する関数
int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    return combination(n-1,r-1)+combination(n-1,r);
}

//***** 以下、改変禁止 *****///

int main() {
    int n, r;

    cout << "n と r を入力してください:";
    cin >> n >> r;

    if (n < 0 || r < 0 || r > n) {
        cout << "不正な入力です" << endl;
    }
    else {
        cout << n <<  "C" << r << " = " << combination(n, r) << endl;
    }

    return 0;
}