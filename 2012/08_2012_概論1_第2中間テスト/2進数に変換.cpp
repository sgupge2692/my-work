//2進数に変換するプログラム
#include <iostream> 
using namespace std; 

int main() { 
    int i, num; 
    i = 0; 
    num = 0; 
    int array[100]; 
    cout << "正の整数を入力して下さい" << endl; 
    cin >> num; 

    //ここに10進数から２進数に変換するプログラムを作成 

    while(num>=1){
        array[i] = num%2;
        num = num/2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) { 
        cout << array[j]; 
    } 
    return 0;
}