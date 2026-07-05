#include<iostream>
using namespace std;

int main(){
    double sequence[20];
    double S;
    cin >> S;

    for(int i=1;i<20;i++){
        S = (S/3.0)+2.0;
        sequence[i] = S;
         cout << sequence[i] << endl;
    }
}