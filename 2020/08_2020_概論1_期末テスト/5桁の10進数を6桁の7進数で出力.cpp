#include <iostream> 
using namespace std; 
void convertSeptenary(int input) { 
    int output[6];
    int count=0;
    while(input>=0&&count<6){
        output[5-count]=input%7;
        input /= 7;
        count++;
    }
    for (int i = 0; i < 6; i++) { 
        cout << output[i]; 
    } 
    cout << endl; 
} 

int main() { 
    int input; 
    cin >> input; 
    convertSeptenary(input); 
}
