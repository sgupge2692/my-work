/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 6
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 19 日
**********************************************************/
#include <iostream>
using namespace std;

int main() {
    char data[10];
    for(int i=0; i<10; i++) { cin >> data[i]; }

    int count = 0;
    // 【穴埋め：配列を走査し、同じ文字が連続している箇所を特定して count を増やす】
    // ヒント：「今」と「次」を比較し、かつ重複カウント（aaaを2箇所と数えるか等）に注意
    for(int i=0;i<9;i++){
        if(data[i]==data[i+1]){
            if(i == 0 || data[i] != data[i-1]) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}