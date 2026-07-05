#include<iostream> 
using namespace std; 

int Binary_to_Decimal(int binary){
    int decimal = 0,base =1;
    while(binary>0){
        decimal += binary % 10 * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int Decimal_to_Binary(int decimal){
    int binary = 0, base = 1;
    while(decimal>0){
        binary += decimal%2*base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}

int function(int binary_A,int binary_B){
    int ans1,ans2;
    ans1 = Binary_to_Decimal(binary_A);
    ans2 = Binary_to_Decimal(binary_B);
    int ans = ans1+ans2;
    ans = Decimal_to_Binary(ans);

    return ans;
}

int main(){ 
    int binary_A, binary_B, binary_Ans;  
    cout << "2進数表記で入力してください" << endl; 
    cin >> binary_A; 
    cin >> binary_B; 
    // binary_Ans = function(binary_A, binary_B); 
    // cout << "2進数で計算した和："<< binary_Ans << endl; 
    return 0;
}