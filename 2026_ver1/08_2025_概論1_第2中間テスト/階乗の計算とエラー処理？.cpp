//階乗の計算とエラー処理？
#include <iostream>
using namespace std; 

int main(){ 
    int Num, Ans = 1;
    cin >>Num;

    for(int i=1;i<=Num;i++){
        Ans*=i;
    }
    cout << Num <<"の階乗：" << Ans << endl; 
    return 0;
}
