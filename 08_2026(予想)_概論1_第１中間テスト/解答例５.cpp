/*********************************************************
底 x と指数 n を入力し、x の n 乗 (xn) を再帰呼び出しによって求める関数 int power(int x, int n) を作成しなさい。 
制約：for ループおよび while ループを使用してはいけない。 ※ x 0=1 とする。
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int power(int x, int n){
    if(n==0){
        return 1;
    }else{
        return x * power(x,n-1);
    }
}


int main() {
    // ここに回答を記述
    int x,n;
    cin>>x>>n;
    int ans = power(x,n);
    cout<<ans;
    return 0;
}