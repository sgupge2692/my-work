#include <iostream>
using namespace std;

int main(){
    int input=1;
    while(input!=0){
        cin >> input;
        if(input%2==0){
            cout<<input<<endl;
        }else{
            cout<<"奇数です"<<endl;
        }

    }

    return 0;
}