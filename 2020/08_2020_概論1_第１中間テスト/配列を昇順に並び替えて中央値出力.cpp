/*配列を照準に並び替えて中央値を出力する*/
#include <iostream> 
using namespace std; 
int main(){ 
    int array[11]; 
    int med = 0; 
    //長さ11の配列arrayを受け取る 
    for(int i = 0 ; i < 11 ; i++ ){ 
        cin >> array[i]; 
    } 
    int tmp;

    for(int i=0;i<11;i++){
        for(int j=i+1;j<11;j++){
            if(array[i]<array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    med = array[5];

    //中央値medを出力する 　 　
    cout << med << endl; 
    return 0; 
}