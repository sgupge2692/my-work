#include <iostream> 
using namespace std; 

int main(){ 
    int num[10]; 
    int i; 
    
    for(i = 0 ; i < 10 ; i++ ){ 
        cin >> num[i]; 
    } 


    //偶数が先の昇順に並び替える
    int j;
    int tmp;

    for(i = 0; i < 10 ; i++){
        for(j = i+1 ; j <10;j++){
            if(num[j]<num[i]){
                tmp = num[j];
                num[j] = num[i];
                num[i] = tmp;
            }
        }
    }

    for(i = 0; i < 10 ; i++){
        for(j = 0 ; j < 9 ;j++){
            if(num[j]%2==1&&num[j+1]%2==0){
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
        }
    }
    
    for(i = 0 ; i < 10 ; i++ ){ 
        cout << num[i] << endl; 
    } 
    return 0;
}