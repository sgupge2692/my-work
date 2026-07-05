/*5進数に変換するやつ*/
#include<iostream> 
using namespace std; 
int main() { 
    int number; 
    int five[5] = { 0 }; 
    cin >> number; 
    //回答ここから 
    for(int i=0;i<5;i++){
        five[i] = number%5;
        number /= 5;
    }
    //回答ここまで 
    for (int i = 4; i >= 0; i--) { 
        cout << five[i]; 
    } 
    return 0;
}
