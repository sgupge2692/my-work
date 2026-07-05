/*第0項が0，第1項が1，第n+2項が第n項と第n+1項の和，であるフィボナッチ数列があります． 
すなわち「　F0 = 0，F1 = 1，Fn+2 = Fn + Fn+1 (n ≧ 0)　」という数列です． 
このフィボナッチ数列の第0項から第30項まで表示するプログラムを作成しなさい．
*/
#include <iostream>
using namespace std;

int main() {

    int Fibo[31];
    Fibo[0]=0;
    Fibo[1]=1;
    for(int i=2;i<=30;i++){
        Fibo[i]=Fibo[i-1]+Fibo[i-2];
    }
    for(int i=0;i<=30;i++){
        cout<<Fibo[i]<<" ";
    }
    return 0;
}