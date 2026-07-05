/*ある学生のテストの点数を100点満点の自然数で入力します．
 90点以上であれば「秀」，89～80点であれば「優」，79～70点であれば「良」，69～60点であれば「可」，59点以下であれば「不可」と表示する
*/
#include<iostream>
using namespace std; 
int main() { 
    int score; 
    cout << "テストの点数を入力してください" << endl; 
    cin >> score;  //ある学生のテストの点数 
    if(score>=90){
        cout << "秀";
    }else if(score>=80){
        cout << "優";
    }else if(score>=70){
        cout <<"良";
    }else if(score>=60){
        cout << "可";
    }else{
        cout << "不可";
    }
    
}