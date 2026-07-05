/*whileループを使い，ユーザが0を入力したらプログラムを終了しなさい．
ユーザが偶数（0以外）を入力したらその偶数の値を表示しなさい．
ユーザが奇数を入力したら「奇数です。」と表示しなさい． 
*/
#include <iostream>
using namespace std;

int main(){
    int input=1;
    while(input!=0){
        cin >> input;
        if(input%2==0){
            cout<<input<<endl;
        }else{
            cout<<"奇数です"<<endl;
        }

    }

    return 0;
}