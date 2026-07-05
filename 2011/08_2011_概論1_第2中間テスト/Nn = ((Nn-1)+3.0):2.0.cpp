/* 実数の数列「Nn＝(Nn-1+3.0) / 2.0」（前項に3を足して2で割った値を次の項とする数列）を考えます．
１：double型１次元配列double sequence[10]を定義する．
２：初項（第0項）S0=sequence[0]にユーザが入力した実数を代入する．
３：第1項から第9項までを，それぞれ前項を用いて計算し，Snの値をsequence[n]に代入する．
４：数列sequence[0]～sequence[9]の値を，改行しながら順番に画面に表示する．
注：forループを用いることで，数列の項数（10）を容易に変更できるアルゴリズムとすること．

中山功一. 続けるC++プログラミング 中級者を目指す人にささげる問題集＆解答解説集: 実技試験×10年分 (p. 25). (Function). Kindle Edition. 
*/
#include <iostream>
using namespace std;

int main() {
    double sequence[10];
    
    cin >> sequence[0];

    for(int n = 1;n<10;n++){
        sequence[n] = (sequence[n-1]+3.0)/2.0;
    }
    for(int i=0;i<10;i++){
        cout << sequence[i] << endl;
    }

    return 0;
}