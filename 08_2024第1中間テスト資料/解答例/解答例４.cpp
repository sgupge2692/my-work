//もう一回やる
#include <iostream>
using namespace std;

int main() {
    int points;             //違反点数
    int totalPoints = 0;    //これまでの違反点数の累積点数
    int noViolations = 0;   //無違反年数（違反0点の年数）

    for (int year = 1; year <= 10; year++) {
        cout << year << "年目　違反点数 ";
        cin >> points;
        totalPoints += points;

        // 【追加】無違反カウントの更新（1点でも取ったら0リセット）
        if (points == 0) {
            noViolations++;
        } else {
            noViolations = 0;
        }

        // 【修正】判定の順番を「厳しい順」に入れ替え
        if (totalPoints >= 10) {
            cout << "免許取消" << endl;
            return 0;
        } 
        else if (noViolations >= 3) {
            cout << "_______状態：ゴールドドライバー";
            totalPoints = 0; // ゴールドでリセット
            // 無違反カウントを3で止めるか0に戻すかは問題によるが、一旦継続
        } 
        else if (totalPoints >= 5 && totalPoints <= 9) {
            // 【修正】表示してからリセットする
            cout << "_______状態：免停ドライバー" << "，累積点数：" << totalPoints << endl;
            totalPoints = 0; 
            
            if (year == 10) return 0;

            year++;
            cout << year << "年目　状態：免停中________" << endl;
            continue; // 免停中の年は入力がないので次のループへ
        } 
        else if (points == 0) {
            cout << "_______状態：優良ドライバー";
        } 
        else {
            cout << "_______状態：一般ドライバー";
        }

        // 共通の末尾表示
        cout << "，累積点数：" << totalPoints << endl;
    }
    return 0;
}