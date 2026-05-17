/*********************************************************
10人の学生のテスト点数（0〜100点）を配列に読み込み、以下の3つの値を算出するプログラムを作成しなさい。
平均点（実数で表示）
最高点
最低点
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ここに回答を記述
    int scores[10]={10,44,31,53,33,100,94,54,88,23};
    double ave = 0;
    int max = 0;
    int under = 0;

    for(int i=0;i<10;i++){
        ave += (double)scores[i];
    }
    ave = ave/10.0;

    int tmp=0;
    for(int i=0;i<10;i++){
        for(int j = i+1; j<10; j++){
            if(scores[i]>scores[j]){
                tmp = scores[i];
                scores[i] = scores[j];
                scores[j] = tmp;
            }
        }
    }
    max = scores[9];
    under = scores[0];
    cout<<"平均"<<ave<<endl<<"最大値"<<max<<endl<<"最小値"<<under<<endl;
    return 0;
}