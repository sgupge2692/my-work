#include <iostream>
#include <string>

using namespace std;

int main() {
    int days;               //宿泊日数
    int fee;                //割引前の旅行代金
    bool transportation;    //交通の有無
    int youbi;              //旅行開始日の曜日（0:日,1:月,2:火,3:水,4:木,5:金,6:土）
    int discounted_fee;     //割引後の旅行代金
    int coupon = 0;         //地域クーポン支給額
    int discount_limit = 0; //割引後の旅行代金の下限

    cout << "宿泊日数：";
    cin >> days;
    cout << "旅行代金：";
    cin >> fee;
    cout << "交通(1：付,0：無）：";
    cin >> transportation;
    cout << "曜日（0:日,1:月,2:火,3:水,4:木,5:金,6:土）：";
    cin >> youbi;

    /************** これより上は変更禁止 **************/

    //旅行代金の割引額
    int discount = fee/5;
    // 交通付きの場合
    if(transportation==1){// 割引は1泊につき最大5000円
        if(discount>5000){
            discount=5000*days;
        }
    }else{// 交通無しの場合
        if(discount>3000){
            discount=3000*days;
        }
    // 割引は1泊につき最大3000円
    }
    discounted_fee = fee - discount;
    //地域クーポンの支給額
    for(int i=0;i<days;i++){
        if(youbi==6){    //土曜日の場合，クーポンの支給額は1000円
            coupon+=1000;
            youbi = 0;
            discount_limit += 2000;//土曜日の場合，下限は2000円
        }else{//土曜日以外の場合，クーポンの支給額は2000円
            coupon+=2000;
            discount_limit+=3000;//土曜日以外の場合，下限は3000円
            youbi++;
        }
    }

    //旅行代金の下限の計算



    // 割引後の旅行代金が下回ったら割引なし＆クーポンなし
    if(discount_limit>discounted_fee){
        coupon=0;
        discounted_fee += discount; 
    }
    /************** これより下は変更禁止 **************/

    // 結果を出力
    cout << "割引後の金額：" << discounted_fee << "円" << endl;
    cout << "地域クーポン支給額：" << coupon << "円" << endl;
}