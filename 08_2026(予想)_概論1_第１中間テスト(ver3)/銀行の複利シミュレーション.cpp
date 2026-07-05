/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 4
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 19 日
**********************************************************/
#include <iostream>
using namespace std;

int main() {
    int money, goal, years = 0;
    double rate;
    cin >> money >> goal >> rate;

    // 【穴埋め：moneyがgoalに達するまで繰り返すループを記述】
    while(money<=goal){
        // 【利息計算：小数点以下切り捨てに注意】
        money = money + (int)(money*rate/100.0);
        years++;
    }

    cout << years << endl;
    return 0;
}