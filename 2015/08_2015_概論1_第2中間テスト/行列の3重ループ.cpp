#include<iostream> 
using namespace std; 

int main(){ 
    int X[2][4], Y[4][2], Ans[2][2];  
    int i , j;  
    //行列への代入 
    for(i = 0 ; i < 2 ; i++){ 
        for(j = 0 ; j < 4 ; j++){ 
            cin >> X[i][j]; 
        } 
    } 
    
    for(i = 0 ; i < 4 ; i++){ 
        for(j = 0 ; j < 2 ; j++){ 
            cin >> Y[i][j]; 
        } 
    } 
    
    //行列の掛け算
    int k;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            Ans[i][j]=0;
            for(k=0;k<4;k++){
                Ans[i][j]+=X[i][k]*Y[k][j];
            }
        }
    } 
    //回答の表示 
    for(i = 0 ; i < 2 ; i++){ 
        for(j = 0 ; j < 2 ; j++){ 
            cout << Ans[i][j] << ","; 
            } 
            cout << endl; 
        } 
        return 0;
    }