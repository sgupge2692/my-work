#include <iostream>

using namespace std;

#define N 4

int main() {
    int P[N][N], Q[N][N], Ans[N][N];

    // 行列Pの入力
    for (int row = 0; row < N; row++) {
        for (int column = 0; column < N; column++) {
            cout << "P[" << row << "][" << column << "] = ";
            cin >> P[row][column];
        }
    }

    // 行列Qの入力
    for (int row = 0; row < N; row++) {
        for (int column = 0; column < N; column++) {
            cout << "Q[" << row << "][" << column << "] = ";
            cin >> Q[row][column];
        }
    }

    // 結果行列の初期化
    for (int row = 0; row < N; row++) {
        for (int column = 0; column < N; column++) {
            Ans[row][column] = 0;
        }
    }

    // 行列の積を計算する

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            for(int k = 0 ; k < N ; k++){
                Ans[i][j]+=P[i][k]*Q[k][j];
            }
        }
    }


    // 結果の表示
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Ans[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}