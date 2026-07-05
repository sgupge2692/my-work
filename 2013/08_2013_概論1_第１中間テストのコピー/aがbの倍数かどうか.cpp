/*int型の変数aとbがあります．ユーザが最初に入力する値をaに，次に入力する値をbに代入します． 
aがbの倍数である場合は，「最初の入力値は次の入力値の倍数です」と表示し， 
aがbの倍数でない場合は，「最初の入力値は，次の入力値の倍数ではありません」と表示しなさい．
*/
#include<iostream> 
using namespace std; 
int main() { 
    int a, b; //変数aとbを入力 
    cout << "最初の値：" << endl; 
    cin >> a; 
    cout << "次の値：" << endl; 

    cin >> b; 
    if(a%b==0){
        cout << "最初の入力値は次の入力値の倍数です" << endl; 
    }else{
    cout << "最初の入力値は，次の入力値の倍数ではありません" << endl; 
    }
    return 0;
}