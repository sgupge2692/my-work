/*ユーザが入力する4個の自然数の中から，最も小さい値を表示するプログラムを作成しなさい．
*/
#include <iostream> 
using namespace std; 
int main(){
    int min,data[4];
    for(int i=0;i<4;i++){
        cin >> data[i];
    }
    min = data[0];
    for(int i=1;i<4;i++){
        if(min>data[i]){
            min = data[i];
        }
    } 
    cout << "入力された中で最小の値は" << min << "です。" << endl; 
    return 0; 
}