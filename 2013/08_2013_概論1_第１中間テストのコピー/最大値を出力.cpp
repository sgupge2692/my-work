/*int型の配列a[3]に，ユーザから入力される3つの自然数を格納します．  
これら3つの自然数のうち，最も大きな数字を表示するプログラムを作成しなさい*/

#include<iostream> 
using namespace std; 
int main() { 
    int max = 0; //最大値を格納する変数 
    int a[3];  //入力値を格納する配列 
    int i;  //forループで用いる変数 
    for (i = 0; i < 3; i++) { 
        cout << i + 1 << "番目の値：" << endl; 
    }
    max = a[0];
    for(int i=1;i<3;i++){
        if(max<a[i]){
            max = a[i];
        }
    } 
    cout << "最大値：" << max << endl; 
    return 0;
}