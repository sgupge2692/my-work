/*1の位が1である答えを，1個ずつ改行しながら全て表示するプログラムを作成しなさい． 
例えば，n=9の場合は，「1 (改行)  21 (改行)  21 (改行)  81」のように表示してください．
*/
#include<iostream> 
using namespace std; 
int main() { 
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i*j)&10==1){
                cout<<i*j<<endl;
            }
        }
    }
    return 0;
}