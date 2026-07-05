/*
ユーザが入力した３つの実数値(double型)を幅width，高さheight，奥行きdepthとする直方体の，体積と表面積を計算して実数で表示するプログラムを作りなさい．
なお，体積はwidth × height × depth，表面積は2×(width×height + height×depth + depth×width）である．
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double width,height,depth;

    cout << "直方体の幅を入力してください"<<endl;
    cin >> width;
    cout << "直方体の高さを入力してください"<<endl;
    cin >> height;
    cout << "直方体の奥行きを入力してください"<<endl;
    cin >> depth;

    double taiseki,hyoumenseki;

    taiseki = width * height * depth;
    hyoumenseki = 2 *(width * height + width * depth + height * depth);

    cout<<"直方体の体積は"<<taiseki<<"です"<<endl;
    
    cout<<"直方体の表面積は"<<hyoumenseki<<"です"<<endl;


    return 0;
}