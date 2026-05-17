
#include <iostream>
using namespace std;

int main() {
    int number;

    // 2以上1000以下の自然数を入力
    cin >> number;

    // 入力された数字が条件を満たさない場合
    if (number > 1000 || number <= 1) {
        cout << "条件を満たさない数字が入力されました．" << endl;
        return 0;
    }

    // 入力した数字までの素数を足し合わせる
    int data = 0;


    /* 回答部分 */
    for(int i=2;i<=number;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            data+=i;
        }
    }
    // 結果を表示する
    cout << data << endl;

    return 0;
}