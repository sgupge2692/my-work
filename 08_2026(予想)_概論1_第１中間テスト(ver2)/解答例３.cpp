/*********************************************************
サイズ 8 の整数型配列 int dataに値を読み込み、
その配列に含まれる「最大値と最小値の差」を計算して出力しなさい。
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ここに回答を記述
    int data[8];
    for(int i=0;i<8;i++){
        cin >> data[i];
    }
    int tmp = 0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(data[i]>data[j]){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    cout << data[7]-data[0];

    return 0;
}