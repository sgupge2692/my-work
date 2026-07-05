/*任意の9個の自然数が入力されます． 1個目に入力された値が偶数の場合は， 2個目から9個目に入力された8個の自然数を昇順（小さい順）に並び替えて出力し， 1個目に入力された値が奇数の場合は， 2個目から9個目に入力された8個の自然数を降順（大きい順）に並び替えて出力しなさい.*/
#include <iostream> 
using namespace std; 
int main() { 
    int num; 
    int numList[8]; 
    cin >> num; 
    
    for (int i = 0; i < 8; i++) { 
        cin >> numList[i]; 
    }
    
    int tmp;
    if(num%2==0){
        for(int i=0;i<8;i++){
            for(int j=i+1;j<8;j++){
                if(numList[i]>numList[j]){
                    tmp = numList[i];
                    numList[i] = numList[j];
                    numList[j] = tmp;
                }
            }
        }
    }else{
        for(int i=0;i<8;i++){
            for(int j=i+1;j<8;j++){
                if(numList[i]<numList[j]){
                    tmp = numList[i];
                    numList[i] = numList[j];
                    numList[j] = tmp;
                }
            }
        }
    }
    //ソートされた配列numListを出力 
    for (int i = 0; i < 8; i++) { 
        cout << numList[i] << " "; 
    } 
    return 0; 
}