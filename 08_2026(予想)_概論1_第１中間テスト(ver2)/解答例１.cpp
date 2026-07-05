/*********************************************************
あるスーパーでは、以下のルールで会計金額を計算している。 
・商品の単価(price)と個数(quantity)を入力する。 
・同じ商品を 5個以上購入した場合、その商品の合計金額から 10% 割引かれる。 
・さらに「会員カード」を持っている場合（フラグが1）、上記の割引後の金額からさらに 500円が割引かれる（ただし、合計金額がマイナスになる場合は 0円とする）。
 ※1円未満の端数は切り捨てとする。
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ここに回答を記述
    int price,quantity;
    int flag = 0;
    cin >> price >> quantity >> flag;
    int total = price * quantity;
    if(quantity>=5){
        total = (total*9)/10;
    }

    if(flag==1){
        total = total - 500;
    }

    if(total<0){
        total = 0;
    }
    cout << total;

    return 0;
}