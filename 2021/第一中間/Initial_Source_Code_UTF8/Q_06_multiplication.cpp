/*********************************************************
プログラミング概論Ｘ（第Ｘ中間試験）：問X
　　　学籍番号：XX23XXXX 氏名　XXXXXX
   　　提出日：20XX年 X月 X日
**********************************************************/
#include<iostream>
using namespace std;

int main() {
    int max, num, output = 0;
    int ans[10000] = { }; // 全ての要素を0で初期化
    cout << "max * max の最大値：maxは？" << endl;
    cin >> max;
    cout << "表示する値の登場回数は？" << endl;
    cin >> num;

    cout << max << "*" << max << "中に" << num << "回登場する値：" << endl;

    for(int i = 1 ;i < max ; i++){
        for(int j = 1;j < max ; j++){
            ans[i*j]+=1;
        }
    }

    for(int i = 0;i<max*max;i++){
        if(num==ans[i]){
            output=i+1;
            cout << output << endl;
        }
    }
  
    return 0;

}
