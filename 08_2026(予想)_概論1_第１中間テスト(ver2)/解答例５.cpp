/*********************************************************
正の整数 n を入力し、その整数が「何桁あるか」を再帰呼び出しを用いてカウントするプログラムを作成しなさい。
 例えば、12345 が入力された場合、出力は 5 となる。 
 制約：for ループおよび while ループを使用してはいけない。
**********************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int count_digits(int n){
    if(n/10==0){
        return 1;
    }else{
        return 1 + count_digits(n/10);
    }
}


int main() {
    // ここに回答を記述
    int n;
    cin >> n;
    cout << count_digits(n);
    return 0;
}