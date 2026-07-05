/* 123
   456を
   41  
   52  
   63　と出力させる
*/
#include <iostream>
using namespace std;
 int main() { 
    int i, j;      //forループ用の変数 
    int array[2][3] = { {1,2,3},{4,5,6} }; 
    for (i = 0; i < 3; i++) { 
        for (j = 1; j >= 0; j--) { 
            cout << array[j][i]; 
        } 
        cout << endl;   //行の数だけ改行する 
        } 
        return 0;
    }
