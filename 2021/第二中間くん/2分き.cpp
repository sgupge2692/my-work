#include <iostream> 
using namespace std; 
int main() { 
    int tree[127], LR[6], i, n; 
    
    for (n = 0; n < 127; n++) { 
        tree[n] = n; 
    } 
    
    for (i = 0; i < 6; i++) { 
        cout <<"深さ" << i <<"では左右どちらの子に移動しますか？：左:0,右：1" << endl; 
        cin >> LR[i]; 
    } 
    

    cout <<"葉ノードまでの経路の各ノードの値" << endl; 
    n=0;
    cout << tree[0] << endl;
    for(i = 0;i<6;i++){
        n=2*n+1+LR[i];
        cout << tree[n] << endl;
    }
    return 0;
}

