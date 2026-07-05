/*********************************************************
とりボナっち
**********************************************************/
#include <iostream>
using namespace std;
int tribonacci(int n){
    if(n<=1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
}


int main() {
    int n;
    cin >> n;
    cout<<tribonacci(n);
    return 0;
}