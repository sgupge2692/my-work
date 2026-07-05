//2011 概論1　第二中間追試　問一　p39
#include <iostream>
using namespace std;

int main() {

    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            cout << i << "%" << j << "=" << i%j << " ";
        }
        cout << endl;
    }
    return 0;
}