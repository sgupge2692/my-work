/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 4
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 20 日
**********************************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int age, gb;
    cin >> age >> gb;
    // ここに比較ロジックを記述
    int plan_a=0,plan_b=0,plan_c=0;
    
    plan_a = 2000;
    plan_b = 1000 + 300*gb;
    if(age<=22){
        plan_c = 1500;
    }else{
        plan_c = 10000;
    }
    if(plan_a<plan_b&&plan_a<plan_c){
        cout<<"A";
    }else if(plan_b<plan_a&&plan_b<plan_c){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;
}