/*ユーザが入力する5つの自然数の中から，最大値と最小値を表示するプログラムを考えます．
  １：int型１次元配列int array[5]と，ループ用の変数int nを定義する． 
  ２：nが0，1，2，3，4と変化するforループ文を用いて，以下を5回繰り返す． 
  ２－１：画面に「n+1番目の自然数を入力してください．」と表示し，改行する． 
  ２－２：ユーザが入力した自然数を，array [n]に代入する． 
  ３：５つの数字の最大値と最小値を判別する． 
  ４：画面に，「最大値は○○です」と表示し，改行する． 
  ５：画面に，「最小値は○○です」と表示し，改行する．
*/
#include <iostream>
using namespace std;

int main(){
    int array[5],n,max,min;
    for(int n=0;n<5;i++){
        cout<<n+1<<"番目の自然数を入力してください" << endl;
    }
    int max = array[0];
    int min = array[0];

    for(int i=1;i<5;i++){
        if(max<array[i]){
            max = array[i];
        }
        if(min>array[i]){
            min = array[i];
        }

    }

    cout << "最大値は"<<max<<"です"<<endl;
    cout << "最小値は"<<min<<"です"<<endl;
    return 0;
}