#include <iostream>
using namespace std;
int main() {
    int nenrei;
    cin>>nenrei;
    if(nenrei<18){
        cout << "未成年" << endl << "飲酒・喫煙不可" << endl;
    }else if(nenrei<20){
        cout << "成人" << endl << "飲酒・喫煙不可" << endl;
    }else{
        cout << "成人" << endl << "飲酒・喫煙可" << endl;
    }
}