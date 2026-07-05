/*int型１次元配列int array[]に，ユーザから入力された自然数を格納します．  
ユーザが-1を入力すると，入力は終了とします．
 これらの自然数を小さい順に並び替えて（ソートして）， 画面上に小さい順に表示するプログラムを作成しなさい． 
*/
#include <iostream>
using namespace std;

int main(){
    int array[100];
    int i=0;
    cin >> array[i];
    while(array[i]!=-1){
        i++;
        cin>>array[i];
    }
    int n=i;
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}