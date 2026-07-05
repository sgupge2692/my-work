#include <iostream> 
using namespace std; 
int main() { 
    int k; 
    int i; 
    // 1. ユーザに任意の自然数を入力してもらうメッセージを表示する 
    cout << "任意の自然数を入力してください" << endl; 
    cin >> k; 
    // 2 変数iの値を1からkまで変更しながら以下の処理を繰り返す
    for(i=1;i<=k;i++){

    // 2.1. iがkの約数ならば出力する 
        if(k%i==0){
        cout << i << ", ";
        } 
    }
}