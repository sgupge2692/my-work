/*int型の要素数5の配列data[5]を定義します．
forループを使って，ユーザが入力する5つの自然数を，data[5]に格納しなさい． 
次に，最初に入力された自然数の値が，1だったら「いち」，2だったら「に」，3だったら「さん」，
それ以外だったら「その他」と表示しなさい． ただし，if文を使ってはいけません．
*/
#include<iostream> 
using namespace std;
 int main() { 
    int data[5]; //入力値を格納する配列 
    int i;  //forループで用いる変数 
    for (i = 0; i < 5; i++) { 
        cout << i + 1 <<"番目の値：" << endl; 
        cin >> data[i]; 
    } 
        switch (data[0]) {
            case 1: 
            cout << "いち" << endl; 
            break; 
            case 2: 
            cout << "に" << endl;
            break; 
            case 3: 
            cout << "さん" << endl; 
            break; 
            default:
            cout << "その他" << endl; 
            break; 
        } 
        cout << endl; 
        return 0;
    }
