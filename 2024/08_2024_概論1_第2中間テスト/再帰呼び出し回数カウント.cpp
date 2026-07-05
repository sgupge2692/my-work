#include <iostream>
using namespace std;

int euclideanSteps(int a, int b) {
    if (a < b) {
        swap(a, b);
    }

    /***************** 回答部分ここから *****************/
    // for文とwhile文は使用禁止
    // bが0になった場合，再帰の終わり
    if(b==0){
        return 0;
    }else{
        return 1+euclideanSteps(b,a%b);
    }

    /***************** 回答部分ここまで *****************/
}

//以下，変更禁止
int main() {
    int a, b;
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "エラー：自然数を入力してください" << endl;
        return 1;
    }
    cout << euclideanSteps(a, b) << endl;
    return 0;   //終了前に表示画面を止めたい場合は，この行にブレークポイント
}