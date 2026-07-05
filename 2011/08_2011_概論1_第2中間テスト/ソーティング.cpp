//もう一回
#include <iostream>
using namespace std;

int main() {

    int array[5] = {5,9,2,4,9};
    int tmp;
    
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(array[i]>array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }


    for(int i=0;i<5;i++){
        cout << array[i]<< " ";
    }
    cout << endl;
    return 0;
}