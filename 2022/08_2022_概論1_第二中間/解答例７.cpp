#include<iostream> 
using namespace std; 
#define N 2 /*直交行列*/ 

int main() { 
    double array[N][N], tmp=0, flag = 1; 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) { 
            cin >> array[i][j]; 
        } 
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tmp = 0; 
            for(int k = 0; k < N; k++){
                tmp += array[i][k]*array[k][j]; 
            }
            if(i==j&&tmp!=1){
            flag =0;
        }
        if(i!=j&&tmp!=0){
            flag = 0;
        }
        }
        
    } 
    

    //回答部分（他の部分も変更可） 
    if (flag == 1) {
        cout << "直交行列である" << endl; 
    } else { 
        cout << "直交行列ではない" << endl; 
    } 
    return 0;
}
