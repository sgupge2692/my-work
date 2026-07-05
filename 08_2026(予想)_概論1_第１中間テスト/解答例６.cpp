/*********************************************************
3行3列の整数行列を入力として受け取り、以下の2つを出力しなさい。
・すべての要素の合計値。
・対角成分（左上から右下への斜めライン）の和。
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[3][3];
      int total=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            total+=a[i][j];
        }
    }
  
    int naname=a[0][0]+a[1][1]+a[2][2];

    cout<<total<<endl<<naname;
    // ここに回答を記述

    
    return 0;
}