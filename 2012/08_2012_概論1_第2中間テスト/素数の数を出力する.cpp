#include <iostream> 
using namespace std; 
int main() { 
    int num = 0; 
    int count = 0; 
    cout << "数字を入力してください" << endl; 
    cin >> num; 
    
    //ここに素数の個数をカウントするプログラムを作成する．
    int for_count=0;
    for(int i=2;i<num;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                for_count++;
            }
        }
        if(for_count==2){
            count++;
        }
        for_count=0;
    } 

    cout << count << endl; 
    return 0;
}
