#include <iostream>
using namespace std;

#define GU 0
#define CYO 1
#define PA 2

int main() {
    double ratio[3][3][3] = {0}; // 3×3×3の要素をすべて0で初期化する
    int num1 = -1, num2 = -1, num3 = -1;

    for (int i = 0; i < 100; i++) {
        /***************** 回答部分ここから *****************/
        num3 = num2;
        num2 = num1;
        cin >> num1;

        if(i >= 2){
            ratio[num3][num2][num1]++;
        }

        /***************** 回答部分ここまで *****************/
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << i << "→" << j << "の回数" << ratio[i][j][0] + ratio[i][j][1] + ratio[i][j][2] << "回" << endl;
            cout << "その後に出した手の回数: ";
            for (int k = 0; k < 3; k++) {
                cout << k << ":" << ratio[i][j][k] << ", ";
            }
            cout << endl;
        }
    }

    return 0;   // 終了前に表示画面を止めたい場合は，この行にブレークポイント
}