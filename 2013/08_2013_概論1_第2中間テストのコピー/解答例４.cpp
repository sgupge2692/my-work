//もう一回
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X[4][3], Y[3][5];
    double Ans[4][5];  // log計算結果は実数になるため double を使用

    // 入力
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            cin >> X[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            cin >> Y[i][j];

    /*** ここに回答を記入 ***/
    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 5; k++) {
            double sum = 0; // 行列積の一時保存用
            for (int j = 0; j < 3; j++) {
                sum += (double)X[i][j] * Y[j][k];
            }

            // 行列積の結果が0以下なら -1、それ以外なら log を取る
            if (sum <= 0) {
                Ans[i][k] = -1.0;
            } else {
                Ans[i][k] = log(sum);
            }
        }
    }



    // 演算した後の行列を出力
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            // 小数点第3位で四捨五入
            cout << round(Ans[i][j] * 100) / 100 << " ";

        }
        cout << endl;
    }
    cout << endl;

    return 0;