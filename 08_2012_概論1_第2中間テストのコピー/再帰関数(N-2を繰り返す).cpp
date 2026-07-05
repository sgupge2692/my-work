/*Ｎを奇数とします． 
Ｎ×（Ｎ－２）×（Ｎ－４）×・・・×５×３×１ という計算の結果を表示するプログラムを作成しなさい．
*/
#include<iostream> 
using namespace std; 
int Function(int k) { 
    if (k == 1) { 
        return(1); 
    } else { 
        return(Function(k - 2) * k);
     } 
    }
int main() { 
    int N; 
    cin >> N; 
    cout << Function(N); 
    return 0;
}
