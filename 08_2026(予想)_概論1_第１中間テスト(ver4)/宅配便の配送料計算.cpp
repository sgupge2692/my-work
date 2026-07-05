/*********************************************************
基本料金：500円
距離料金：
100km以下：無料
100km超〜300km以下：1kmにつき5円
300km超：1kmにつき10円
重量加算：10kgを超える場合、1kgにつき100円加算。 最後に全体に消費税10%を加え、1円未満を切り捨てること
**********************************************************/
/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 1
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 20 日
**********************************************************/
#include <iostream>
using namespace std;

int main() {
    int weight, distance;
    if (!(cin >> weight >> distance)) return 0; // 入力の受け取り

    int fee = 500; // 基本料金
    int distance_fee = 0;
    int weight_fee = 0;

    // 距離料金の計算（層ごとの計算）
    if (distance > 300) {
        // 300kmを超えた分(10円/km) + 100-300km区間の定額分(200km * 5円)
        distance_fee = (distance - 300) * 10 + 1000;
    } else if (distance > 100) {
        // 100kmを超えた分(5円/km)
        distance_fee = (distance - 100) * 5;
    }
    // 100km以下の場合は初期値0のまま

    // 重量加算の計算
    if (weight > 10) {
        weight_fee = (weight - 10) * 100;
    }

    // 合計（税抜）
    fee += distance_fee + weight_fee;

    // 消費税10%を加え、1円未満を切り捨て
    fee = (int)(fee * 1.1);

    cout << fee << endl;

    return 0;
}