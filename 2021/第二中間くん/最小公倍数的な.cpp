#include<iostream> 
using namespace std; 
int main() { 
    
    int n, div5, div9; 
    // cout << "整数nを5で割った余りは？" << endl; 
    cin >> div5; 
    // cout << "整数nを9で割った余りは？" << endl; 
    cin >> div9; 
    
    for(int i=1;i<=100;i++){
        
        if(i%5==div5&&i%9==div9){
        cout << n << endl;
        return 0;
        }
    }
    return 0;
}
