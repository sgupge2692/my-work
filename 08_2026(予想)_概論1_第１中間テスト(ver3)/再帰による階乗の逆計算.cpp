/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 5
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 19 日
**********************************************************/
#include <iostream>
using namespace std;

// 再帰関数：x を divisor で割り続け、階乗の元を特定する
int find_n(int x, int divisor) {
    // 【穴埋め：ベースケース（終了条件）と再帰呼び出しを記述】
    // ヒント：x / divisor が 1 になったらその時の divisor が答え
    if(x/divisor==1){
        return divisor;
    }else{
        return find_n(x/(divisor+1),divisor);
    }
}

int main() {
    int X;
    cin >> X;
    // main 関数は変更不可
    cout << find_n(X, 2) << endl; 
    return 0;
}