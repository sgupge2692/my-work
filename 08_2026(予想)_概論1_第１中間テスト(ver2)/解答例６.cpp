/*********************************************************
サイズ 10 の整数型配列に値を読み込み、最後に「検索したい数値 X」を入力する。
配列の中に X がいくつ含まれているかを数えて出力しなさい
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int data[10];
      int search;
    for(int i=0;i<10;i++){
        cin >> data[i];
    }
    cin >> search;

    int count = 0;

    for(int i=0;i<10;i++){
        if(search == data[i]){
            count++;
        }
    }

    cout<<count;
    // ここに回答を記

    
    return 0;
}