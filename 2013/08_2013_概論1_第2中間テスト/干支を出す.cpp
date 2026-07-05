/*階乗の出力*/

#include<iostream> 
using namespace std; 
//ここに，int Functionを正常に実行させるための動作を1行で書いてください． 
int Function(int i,int j);
int main(){ 
    int n,m; 
    cin >> n; 
    cout << n <<"の" << m <<"乗は"; 
    cout << Function(n,m); 
}  

int Function (int i, int j){
     if(j == 0){ 
        return(1); 
    } else{ // ここに適切な1行を書いてください． 
        return(Function(i,j-1)*i);
    } 

    }