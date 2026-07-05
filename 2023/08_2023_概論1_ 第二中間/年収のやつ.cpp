#include <iostream> 
using namespace std; 
int annual_income(int n) { 
    if(n==1){
        return 350;
    }else{
        return annual_income(n-1)*1.1-20;
    }
    return 0; 
} 
/************** これより下は変更禁止 **************/ 
int main() { 
    int years; 
    cout << "働いた年数: "; 
    cin >> years; 
    int income = annual_income(years); 
    cout << years << "年目の年収：" << income << "万円" << endl; 

}
