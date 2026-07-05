#include <iostream> 
#include <cmath>

using namespace std; 

int main() { 
    int a, b, c, d, e;
    double Ans1 = 0, Ans2 = 0; 
    cout << "入力して下さい" << endl; 
    
    cin >> a >> b >> c >> d >> e; 
    cout << endl << "ax^2+bx+c=dx+e の解："; 
    //解を計算
    
    double D = (double)(b-d)*(double)(b-d) - 4*a*(c-e);
    if(D<0){
    cout << "実数解なし";
    }else{
        Ans1 = (-(b-d)+sqrt(D))/(2*a);
        Ans2 = (-(b-d)-sqrt(D))/(2*a);
        cout << "x = " << Ans1 << "," << Ans2 << endl; 
    }
    return 0;
}
