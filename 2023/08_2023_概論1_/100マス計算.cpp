/*100マス計算*/
#include <iostream>
#include <array>

using namespace std;

int operatorSymbol;

int main() {
    int matrix[11][11] = { 0 };

    cout << "演算子を入力（加算:1,減算:2,乗算:3,除算:4,剰余算:5）" << endl;
    cin >> operatorSymbol;

    matrix[0][0] = 999; 

    // マス上側の数字の入力
    for (int i = 1; i < 11; i++) {
        int number;
        cout << "(" << 0 << ", " << i << "): ";
        cin >> number;
        matrix[0][i] = number;
    }
    cout << endl;

    // マス左側の入力
    for (int i = 1; i < 11; i++) {
        int number;
        cout << "(" << i << ", " << 0 << "): ";
        cin >> number;
        matrix[i][0] = number;
    }

    // 行列の表示
    cout << "計算前のマス" << endl;
    for (int i = 0; i < 11; ++i) {
        for (int j = 0; j < 11; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    /* 回答ここから */
    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++){
          switch(operatorSymbol){
            case 1:
            matrix[i][j] = matrix[0][j] + matrix[i][0];
            break;
            case 2:
            matrix[i][j] = matrix[0][j] - matrix[i][0];
            break;
            case 3:
            matrix[i][j] = matrix[0][j] * matrix[i][0];
            break;
            case 4:
            matrix[i][j] = matrix[0][j] * matrix[i][0];
            break;
            default:
            matrix[i][j] = 0;

          }
        }
    }   


    /* 回答ここまで */

    // 行列の表示
    cout << "計算後のマス" << endl;
    for (int i = 0; i < 11; ++i) {
        for (int j = 0; j < 11; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}