#include <iostream>
using namespace std;

// 素数判定関数
bool isPrime(int kouho) {
    if (kouho < 2) return false;
    for (int divisor = 2; divisor * divisor <= kouho; divisor++) {
        if (kouho % divisor == 0) return false;
    }
    return true;
}

int main() {
    cout << "1000未満の双子素数:" << endl;

    // 1000未満の範囲でチェック (n と n+2 が共に素数なら出力)
    for (int n = 3; n < 998; n++) {
        if (isPrime(n) && isPrime(n + 2)) {
            cout << "(" << n << ", " << n + 2 << ")" << endl;
        }
    }

    return 0;
}