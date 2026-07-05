/*１：画面に「あなたの身長をcm単位で入力してください．」と表示する． 
２：ユーザが入力した身長を，int tallに代入する． 
３：画面に「あなたの体重をkg単位で入力してください．」と表示する． 
４：入力されたユーザの体重を，int weightに代入する． 
５：ユーザが入力した値に応じて，「あなたの身長は○○○cm，体重は○○kgです．」と表示する．  
≪BMI指数を「weight / (tall/100)^2」で計算するものとする．≫ 
６：ユーザのBMI指数を計算し，「あなたのBMIは○○です．」と表示する．
*/
#include <iostream>
using namespace std;

int main(){
    int tall,weight;
    double bmi = 0;

    cin >> tall >> weight;
    bmi = (double)tall /100;
    bmi = weight /(bmi *bmi);
    cout<<bmi;
}