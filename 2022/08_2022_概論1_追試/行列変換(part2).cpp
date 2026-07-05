//行列変換(part2)
#include<iostream> 
using namespace std; 

int main() { 
    char array[4][4] = { {'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'} }; 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) { 
            //回答ここから（これ以前は変更不可） 
            cout << array[(j+3)/2][(5-i)%4]; //行の追加不可 
            //回答ここまで（これ以後は変更不可） 
            } 
            cout << endl; 
        } 
        return 0;
    }