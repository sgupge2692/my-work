#include <iostream>
#include <cmath> // abs() を使うために必要

using namespace std;

int main() {
    int queen_x, queen_y, teki_x, teki_y;
    int output = 0;

    // クイーンと敵の座標を入力
    cin >> queen_x >> queen_y;
    cin >> teki_x >> teki_y;

    /****************************************
     * 回答部分：取れる条件を判定する
     * ここにif文を使って、縦・横・斜めの条件を記述する
     ****************************************/
    
    // ヒント：条件が一つでも当てはまれば output = 1 にする
    if(queen_x==teki_x||queen_y==teki_y){
        output=1;
    }
    if(queen_x+queen_y==teki_x+teki_y||queen_x-queen_y==teki_x-queen_y){
    // 出力
        output=1;
    }
    cout << output << endl;

    return 0;
}