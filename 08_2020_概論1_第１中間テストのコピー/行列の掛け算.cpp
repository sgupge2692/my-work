/*行列の掛け算*/


#include <iostream> 
using namespace std; 
int main(){ 
    int X[3][2], Y[2][4], Ans[3][4]; 
    int i, j; 
    //行列への代入 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){ 
            cin >> X[i][j]; 
        } 
    } 
    
    for(i = 0; i < 2; i++){ 
        for(j = 0; j < 4; j++){ 
            cin >> Y[i][j]; 
        } 
    } 
    
    //行列の掛け算 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            Ans[i][j] = X[i][0]*Y[0][j] + X[i][1] * Y[1][j];
        }
    }



    //Ans[3][4]内の全ての偶数の表示 
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 4; j++){ 
            cout << Ans[i][j] << endl; 
        } 
    
    }
