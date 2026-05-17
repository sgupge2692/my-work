/*********************************************************
自然数 N を入力し、N 以下のすべての「完全数」を表示するプログラムを作成しなさい。
 完全数とは、自分自身を除く約数の和が、自分自身と等しくなる自然数のことである
 （例：6 の約数は 1, 2, 3 で、1+2+3=6 となるため 6 は完全数）。
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

bool factorial(int n){
    int ans=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            ans=ans+i;
        }
    }
    if(ans==n){
        return true;
    }else{
        return false;
    }
}

int main() {
    // ここに回答を記述
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        if(factorial(i)==true){
            cout<<i<<endl;
        }
    }
    return 0;
}