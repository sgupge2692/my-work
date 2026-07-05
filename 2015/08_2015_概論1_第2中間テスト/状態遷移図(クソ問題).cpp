#include<iostream> 
using namespace std; 

int main(){ 
    int S = 0, in, out;
    while (true){ 
        cin >> in; 
        //入力と状態にしたがって， 
        //出力を決定するプログラム
        switch(S){
            case 0:
            if(in == 0){S = 2,out = 1;}
            else{S = 1,out = 0;}
            break;

            case 1:
            if(in == 0){S = 1,out = 0;}
            else{S = 2,out = 1;}
            break;

            case 2:
            if(in == 0){S = 2,out = 1;}
            else{S = 0,out = 1;}
            break;
        }  
        cout << out << endl; 
        break; 
    } 
    return 0;
}
