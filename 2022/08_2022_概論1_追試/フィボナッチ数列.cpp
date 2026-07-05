/*以下のsequence関数（サブルーチン）を再帰呼び出しすることで，自然数である入力値nの階乗を表示する初期ソースコードがあります．
 このうち，sequence関数のみを変更して，フィボナッチ数列の第ｎ項を表示するプログラムを作成しなさい．
 メイン関数を修正してはいけません．また，for文やwhile文を使用せず，再帰呼び出しを使用すること． 
 （参考）フィボナッチ数列は以下の漸化式で定義されます． 
 F1 = 1   （第1項の値は1） 
 F2 = 1   （第2項の値は1） 
 Fn+2 = Fn + Fn+1 (n ≥ 1) （第ｎ+２項の値は 第ｎ項＋第ｎ+1項）*/
#include<iostream> 
using namespace std; 
int sequence(int n) { 
    if (n > 2) { 
        int tmp; 
        tmp = sequence(n - 2) * sequence(n - 1); 
        return tmp; 
    } else { 
        return 1; 
    } 
} 

int main() { 
    int n; 
    cin >> n; 
    cout << sequence(n); 
    return 0;
}
