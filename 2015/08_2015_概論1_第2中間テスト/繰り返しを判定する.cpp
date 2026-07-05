/*ユーザが任意の自然数を入力します．
同じ数字が２回連続で入力された場合には「繰り返されました」と表示してプログラムを終了します．
それ以外の場合は終了せず，入力された値の２倍の数字を表示するプログラム
*/
#include<iostream> 
using namespace std; 
int main(){ 
    int a, b, flag = 0; 
    b = -1; 
    while(flag == 0){ 
        cin >> a; 
        if (a==b){ 
            flag =1;
            cout <<"繰り返されました"; 
        }else{ 
            cout << a*2 << endl;
            b = a;
        } 
    } 
}