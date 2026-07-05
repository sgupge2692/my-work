#include <iostream>
#include <climits>

using namespace std;

// ユークリッドの互除法のステップ数を導出
int gcd_steps(int a, int b, int steps = 0) {
    /*ここに回答を記入*/
    if(b==0){
        return steps;
    }else{
        return gcd_steps(b,a%b,steps+1);
    }
}

int main() {
    int grid[3][3];      // 3x3のマス
    int steps[3][3];     // 各マスのステップ数
    int b;

    // マスの入力
    cout << "ビンゴのマスを入力（3x3）:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> grid[i][j];

    // bの入力
    cout << "bを入力: "<< endl;
    cin >> b;

    // 各マスに対するステップ数を計算
    cout << "ステップ数配列:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //a < bの場合は，剰余数を逆にする
            if (grid[i][j] > b) {
                steps[i][j] = gcd_steps(grid[i][j], b);
            }
            else {
                steps[i][j] = gcd_steps(b,grid[i][j]);
            }
            cout << steps[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}