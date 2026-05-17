#include <iostream>
using namespace std;

int main() {
    int a, b, ans;
    cin >> a >> b;

    // 大きい方をスタート地点にする（ここはあなたのコードと同じ）
    if (a > b) {
        ans = a;
    } else {
        ans = b;
    }

    // 上限を決めずに、見つかるまでループする
    while (true) {
        if (ans % a == 0 && ans % b == 0) {
            // 両方で割り切れたら発見！
            break; 
        }
        ans++; // 見つかるまで増やす
    }

    cout << ans << endl;
    return 0;
}