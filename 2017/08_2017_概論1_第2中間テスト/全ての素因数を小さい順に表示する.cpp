#include <iostream> 
using namespace std; 

void function(int x) { 
    for(int i=2;i<=x;i++){
        if(x%i==0){
            cout << i << ",";
            x /=i;
            function(x);
            break;
        }
    }

} int main() { 
    
    int value; 
    cout << "2以上の値を入力：" << endl; 
    cin >> value; 
    cout << "入力値" << value << "の約数を昇順に表示："; 
    function(value); 

    return 0;
}