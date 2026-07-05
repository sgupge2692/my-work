#include <iostream> 
using namespace std; 

//この関数を利用してもよい（変更してもよい） 
int function(int x) { 
    int n = 0; 
    for (int i = 2; i <= x; i++) { 
        if (x % i == 0) {
            x /= i; i = 1; n++; 
        } 
    } 
    return n; 
} 

int main() { 
    int min, array[10]; 
    cout << "最小値：" << endl; 
    cin >> min; 
    for (int i = 0; i < 10; i++) { array[i] = min + i; } for (int i = 0; i < 10; i++) { for (int j = 0; j < 9; j++) { //この部分を作成し，約数の多い順に並び変えなさい } } for (int i = 0; i < 10; i++) { cout << array[i] << ","; } cout << endl; }
