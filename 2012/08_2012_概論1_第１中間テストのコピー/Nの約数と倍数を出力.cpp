/*ユーザが入力する数字をNとする．  
100以下の自然数から，Nの約数とNの倍数の全てを，小さい順に表示するプログラムを作成しなさい．
*/
#include <iostream>
using namespace std;

int main() {
   
    int N;
    cin >> N;
    for(int i = 1;i<100;i++){
        if(N%i==0||i%N==0){
            cout<<i<<" ";
        }
    }
    return 0;
}