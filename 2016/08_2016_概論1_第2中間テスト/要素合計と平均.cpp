/*要素数10 の実数型の配列input_num [10]に，ユーザが正の値を入力します． 
入力完了後に，その10 個の要素の合計値sumを計算し，表示します． 
最後に，平均値ave を計算して表示しなさい．

*/
#include <iostream> 
using namespace std; 
int main() { 
    int i; 
    double sum = 0, 
    ave = 0; 
    double input_num[10]; //要素の入力 
    for(i=0;i<10;i++){
        input_num[i];
    }
    for(i = 0;i < 10;i++){
        sum += input_num[i];
    }
    //要素の合計の計算と表示 
    cout <<"合計：" << sum << endl; 
    //要素の平均の計算と表示
    ave = sum /10.0; 
    cout <<"平均：" << ave << endl; 

}
