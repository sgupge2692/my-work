//サンプルにこだわりすぎないでいいかも。サンプルの方がやりずらい時とかあるし
#include <iostream>
using namespace std;

bool is_prime(int n){
    if(n<2)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int max;
    cin>>max;

    for(int i=1000;i<=max;i++){
        if(is_prime(i/10)==true&&is_prime(i/100)==true&&is_prime(i/1000)==true&&is_prime(i)==true){
            cout<<i<<endl;
        }
    }
}