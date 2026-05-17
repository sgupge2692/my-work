/*********************************************************
ある駐車場の料金を計算するプログラムを作成しなさい。 料金は以下のルールに従って決まる。 
・最初の60分までは、一律 400円。 
・60分を超えた分については、30分ごとに 200円が加算される。 
・ただし、当日中に「提携店舗のサービス券」を使用した場合、最終的な合計料金から 500円が割引かれる（合計がマイナスになる場合は 0円とする）。
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ここに回答を記述
    int parking_time;
    cin>>parking_time;
    int number;
    int fee=0;
    cin>>number;
    fee = 400;
    parking_time = parking_time-60;
    while(parking_time>0){
        if(parking_time>30){
            fee += 200;
            parking_time=parking_time-30;
        }else{
            parking_time = 0;
            fee +=200;
        }
    }
    if(number==1){
        fee = fee - 500;
        if(fee<0){
            fee = 0;
        }
    }
    cout<<fee;

    return 0;
}