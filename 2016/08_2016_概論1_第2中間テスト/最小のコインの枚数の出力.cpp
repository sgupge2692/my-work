#include <iostream> 
using namespace std; 
int main() { 

    int yen,num=0;
    cout<<"値段を入力"<<endl;
    cin>>yen;

    while(yen!=0){
        if(yen-500>=0){
            num++;
            yen-=500;
        }else if(yen-100>=0){
            num++;
            yen-=100;
        }else if(yen -50>=0){
            num++;
            yen-=50;
        }else if(yen-10>=0){
            num++;
            yen-=10;
        }else if(yen-5>=0){
            num++;
            yen-=5;
        }else if(yen-1>=0){
            num++;
            yen-=1;
        }
    }
    cout << "支払いに必要なコインの枚数:";
    cout<<num<<endl;
    return 0;
}
