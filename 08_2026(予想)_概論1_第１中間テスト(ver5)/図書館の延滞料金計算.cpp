/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 1
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 21 日
**********************************************************/
#include <iostream>
using namespace std;

int main() {
    int books, days;
    cin >> books >> days;
    // ここに回答を記述（「層」ごとの計算を意識しましょう）

    int total = books *10 * days;
    if(days>=8){
        total = total + books * (days-7) * 50;
    }
    total = total + (total/10);
    cout << total;

    return 0;
}