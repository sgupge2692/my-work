/*-1が入力されるまでの数をソートする*/
#include <iostream>
using namespace std;

int main() {
    
    int array[100];
    int i=0;
    cin >>array[0];
    while(array[i]!=-1){
        i++;
        cin>>array[i];
    }

    int tmp;
    for(int j=0;j<i;j++){
        for(int k=j+1;k<i;k++){
            if(array[j]>array[k]){
                tmp = array[j];
                array[j] = array[k];
                array[k] = tmp;
            }
        }
    }
    for(int j=0;j<i;j++){
        cout << array[j] << " ";
    }


    return 0;
}