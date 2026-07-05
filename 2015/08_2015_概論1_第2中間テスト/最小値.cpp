/*ユーザが入力する4個の自然数の中から，最も小さい値を表示するプログラムを作成しなさい．
*/
#include <iostream> 
using namespace std; 
int main(){
    
    int num;
    cin >> num;
    int count=0;
    for(int i=1;i<=num;i++){
        if(i%3==0||i%10==3||i/10%10==3||i/100%10==3||i/1000%10==3){
            count++;
        }
    }
    cout << count << endl;
    return 0; 
}