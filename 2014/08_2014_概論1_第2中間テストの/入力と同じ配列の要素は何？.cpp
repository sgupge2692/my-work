#include<iostream> 
using namespace std; 

int main() { 
    int data[10] = { 1,1,2,3,5,8,13,21,34,55 }; 
    int count = 0, x;

    cout << "自然数の入力" << endl;
    cin >> x;

    for(int i=0;i<10;i++){
        if(data[i]==x){
            count++;
        }
    }
    
    cout << count << "個"; 

    return 0;
}

