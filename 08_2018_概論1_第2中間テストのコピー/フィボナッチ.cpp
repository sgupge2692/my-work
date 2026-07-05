/*
フィボナッチ数列*/

#include <iostream>
using namespace std;   

int fibonati(int num){
    if(num == 0){
        return 0;
    }else if(num == 1){
        return 1;
    }else{
        return fibonati(num - 1) + fibonati(num - 2);
    }
}

int main(){
    int num;
    cin >> num;
    for(num =0;num <20;num++){
        cout << fibonati(num) << endl;
    }
    return 0;
}