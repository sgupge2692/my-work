/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 5
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 20 日
**********************************************************/
#include <iostream>
using namespace std;

int power(int x, int n) {
    // ここに再帰ロジックを記述
    if(n==0){
        return 1;
    }else{
        return x*power(x,n-1);
    }
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << endl;
    return 0;
}