/*5つの文字を並び替えて暗号化する*/
#include <iostream> 
#include <string> 
using namespace std; 
int main(){ 
    char sentence[5] ; 
    int key[5] ; 
    char cryptogram[5]; 
    //平文と暗号化キーの入力 
    for(int i = 0 ; i < 5 ; i++ ){ 
        cin >> sentence[i]; 
    } for(int i = 0 ; i < 5 ; i++ ){ 
        cin >> key[i]; 
    } 
    //暗号化 

    for(int i=0;i<5;i++){
        cryptogram[key[i]] = sentence[i];
    }
    //暗号文の出力 
    for (int i = 0; i < 5; i++) { 
        cout << cryptogram[i] << " "; 
    } 
    cout << endl; 

    return 0;
}
