#include <iostream>
using namespace std;

int main() {

    int data[5] = {17,23,36,44,55};
    int tmp=0;
    for(int i = 0 ;i<5;i++){
        for(int j = i+1 ;j<5;j++){
            if(data[i]%10>data[j]%10){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }

    for(int i=0;i<5;i++){
        cout << data[i] <<", ";
    }
    cout << endl;

    return 0;
}