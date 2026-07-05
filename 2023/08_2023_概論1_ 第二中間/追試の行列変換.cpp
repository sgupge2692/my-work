#include<iostream> 
using namespace std; 
int main() { 
    char array[4][4] = { {'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'} }; 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            /************** これより上は変更禁止 **************/ 
            cout << array[(2*j)%3][(4-i)%4]; 
            
            /************** これより下は変更禁止 **************/ 
        } 
        cout << endl; 
    } 
}
