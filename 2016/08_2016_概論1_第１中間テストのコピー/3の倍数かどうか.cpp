//3の倍数が入力されるまで3の倍数を入力してくださいと出力する
#include <iostream> 
using namespace std; 
int main() { 
    int i; 
    cin >> i; 
    while(i%3!=0){
        cout << "3の倍数を入力してください" << endl; 
        cin >> i; 
    }
        cout << "3の倍数が入力されました" << endl;
}
