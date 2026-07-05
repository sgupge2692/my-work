/*以下の漸化式があります． a_1=1,a_n+1=5a_n-2^n 
nの値を入力すると，anの値を求めるプログラムを，関数の再帰呼び出しを用いて作成しなさい．
べき乗計算は，#include <cmath>して，
pow関数： double pow(double, double)を用いてもよい．
ただし，for文やwhile文を用いた場合は０点とする．
*/

#include<iostream>
#include<cmath>
using namespace std;

int solveRecursively(int n){
    if(n==1){
        return 1;
    }else{
        return 5* solveRecursively(n-1)-pow(2,n-1);
    }

}

int main(){
    int n;
    cin >>n;

    if(n<=0){
        cout <<"入力エラー"<<endl;
        return 1;
    }

    int result = solveRecursively(n);
    cout <<"a " << n <<"の値は"<<result<<"です"<<endl;

}