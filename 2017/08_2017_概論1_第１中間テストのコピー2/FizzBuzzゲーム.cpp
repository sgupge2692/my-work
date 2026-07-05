//Fizz Buzzゲーム
#include <iostream> 
using namespace std; 
int main(){
    for(int i=1;i<=100;i++){
            cout << i << ":";
            if(i%3==0){ 
            cout << "Fizz";
            }
            if(i%4==0){ 
            cout << "Buzz"; 
            }
            cout << "FizzBuzz"; 
            cout << endl;
    }
    return 0;
}