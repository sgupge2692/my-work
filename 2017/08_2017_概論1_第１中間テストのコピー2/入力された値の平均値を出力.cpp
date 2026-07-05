/*ユーザが-1を入力するまで入力を受け付けて， 入力されたすべての数値の平均値を表示するプログラムです．
*/
#include <iostream> 
using namespace std; 
int main() { 
    int value;     // 入力した数値 
    int count = 0;    // 入力された回数 　　　　　　　　　　　　 
    double ave=0;// 平均値を代入する変数

    // 1. メッセージを表示する 
    cout << "値を入力してください(-1で終了)" << endl; 
    // 2. 最初の数値を入力する 
    cin >> value; 
    // 3. 入力した値が-1でない限り以下の処理を繰り返す
    while(value!=-1){ 
    // 3.1. 入力した数値を表示する 
    cin >> value;
    cout << value << endl; 
    // 3.2. 入力した数値を加算する
        ave +=value;
        count++;
    // 3.3. 次の数値を入力する 
    cin >> value; 
    }
    // 4. 入力された数字の平均値(ave)を計算して表示する 
        ave /=count;
        cout << ave << endl;
    }