#include <iostream>
using namespace std;

// 各月の日数（うるう年ではない）
int monthDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

// 日付の妥当性を確認（MMDD形式）
bool isValidDate(int mmdd) {
    /*ここに回答を記入*/
    //mmddを100で割った値が月，1～12以外ならreturn false;
    //mmddを100で割った余りが日，1～「monthDays[mm]」以外はreturn false;
    //上記のいずれも問題なければ return true;
    int month = mmdd/100;
    int day = mmdd%100;
    if(month<1||12<month){
        return false;
    }
    if(day<1||monthDays[month-1]<day){
        return false;
    }

    return true;
}

// MMDD → 年初からの通算日に変換
int dayOfYear(int mmdd) {
    int total = 0;
    for(int i=0;i<mmdd/100-1;i++){
        total+=monthDays[i];
    }
    total+=mmdd%100;
    /*ここに回答を記入*/
    //mmddを100で割った値が月
    //mmddを100で割った余りが日
    //mm月dd日の通算日は，(mm-1)月までの合計日数に，dd日を加算した値
    return total;
}

int main() {
    int price, boardingMMDD, cancelMMDD;
    cin >> price >> boardingMMDD >> cancelMMDD;

    // 妥当性チェック
    if (!isValidDate(boardingMMDD) || !isValidDate(cancelMMDD)) {
        cout << "不正な日付です" << endl;
        return 0;
    }

    // MMDD → 年初からの通算日に変換
    int boardingDay = dayOfYear(boardingMMDD);
    int cancelDay = dayOfYear(cancelMMDD);
    int daysBefore = boardingDay - cancelDay;

    // キャンセル日が搭乗日と同じ場合も含めてOK（0日前扱い）
    double rate;
    if (daysBefore == 0) rate = 0.80;
    else if (daysBefore <= 15) rate = 0.50;
    else if (daysBefore <= 30) rate = 0.20;
    else if (daysBefore <= 60) rate = 0.10;
    else rate = 0.0;

    // 金額 × 割合（整数で扱う）、1円未満切り捨て
    int rawFee = price * rate;
    cout << rawFee << "円" << endl;

    return 0;
}