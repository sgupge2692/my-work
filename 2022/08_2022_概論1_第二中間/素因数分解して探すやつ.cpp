#include<iostream> 
using namespace std; 
bool prime(int n){
    int tmp=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            tmp++;
        }
    }
    if(tmp==1){
        return true;
    }else{
        return false;
    }
}
int main() { 
    int init_num, tmp_num; 
    int prime_factor[10] = { 0 }; 
    //すべての要素を0で初期化 
    
    cin >> init_num; //2以上1000以下の自然数 
    tmp_num = init_num;
    
    int insuu=2;
    int j=0;
    while(tmp_num!=1){
        if(tmp_num%insuu==0&&prime(insuu)==true){
            tmp_num/=insuu;
            prime_factor[j]=insuu;
            insuu=2;
            j++;
        }else{
            insuu++;
        }
    }

    
    //回答部分（他の部分も変更可） 
    for(int i = j-1 ; i>=0 ; i--){  
        cout << prime_factor[i] << endl; 
        } 
    return 0;
}
