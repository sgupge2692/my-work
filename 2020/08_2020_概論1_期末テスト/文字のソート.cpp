#include <iostream> 
using namespace std; 
void charsort(char input[10]) { 
    char tmp;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(input[i]>input[j]){
                tmp = input[i];
                input[i] = input[j];
                input[j] = tmp;
            }
        }
    }
} 
int main() { 
    char input[10]; 
    for (int i = 0; i < 10; i++) { 
        cin >> input[i]; 
    } 
    charsort(input); 
    for (int i = 0; i < 10; i++) { 
        cout << input[i]; 
    } 

} 