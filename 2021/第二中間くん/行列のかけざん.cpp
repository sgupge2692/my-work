#include <iostream>
#include <vector>

using namespace std;

int main() {
    // a: 2行3列, b: 3行2列, ans: 2行2列(積の結果)
    double a[2][3];
    double b[3][2];
    double ans[2][2] = {0}; // 初期値を0に設定しておく

    // 行列aの入力 (2x3)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // 行列bの入力 (3x2)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    /****************************************
     * 回答部分：行列の積の計算
   
     ****************************************/
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    // 結果の出力
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << ans[i][j] << endl;
        }
    }

    return 0;
}