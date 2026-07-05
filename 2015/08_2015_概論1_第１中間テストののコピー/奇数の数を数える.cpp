/*奇数の数を数える*/
#include <iostream> 
using namespace std; 
int main(){ 
    int count = 0; 
    int data;
    for(int i=0;i<10;i++){
        cin >>data;
        if(data%2==1){
            count++;
        }
    }
    cout << "入力された中で奇数の個数は" << count << "です。" << endl; 
    return 0;
}
 