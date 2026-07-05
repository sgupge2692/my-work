//行列を変換して出力
#include <iostream> 
using namespace std; 
int main(){ 
    int i, j; 
    int data[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } }; 
    for (i =0; i <2; i++){ 
        for (j =3; j < 3; j++){ 
            cout << data[2-j][1-i]; 
        } 
        cout << endl; 
    } 
    return 0;
}