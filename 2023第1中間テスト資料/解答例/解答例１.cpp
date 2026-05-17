//クソ問題
#include <iostream>
#include <string>
using namespace std;

int main() {

    int angle1, angle2, angle3;
    cin >> angle1 >> angle2 >> angle3;  //三角形の角度を入力


    //三角形の判定結果の表示
    if(angle1+angle2+angle3!=180){
        cout << "三角形ではない" << endl;    //三角形にならない場合
    }else if(angle1<90&&angle2<90&&angle3<90){
        cout << "鋭角三角形" << endl;    //鋭角三角形の場合
    }else if(angle1>90||angle2>90||angle3>90){
    cout << "鈍角三角形" << endl;    //鈍角三角形の場合
    }else{
    cout << "直角三角形" << endl;    //直角三角形の場合
    }
}