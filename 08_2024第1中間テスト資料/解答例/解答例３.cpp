#include <iostream>
using namespace std;

int main() {
    int travel_days;
    int budget;
    int interest;

    // ユーザーが日数／予算／興味を入力
    cin >> travel_days >> budget >> interest;

    if (interest == 1) {
        // 文化
        if (50 * travel_days <= budget) {
            cout << "オーストラリア" << endl;
        }
        if (20 * travel_days <= budget) {
            cout << "京都" << endl;
        }
        if (10 * travel_days <= budget) {
            cout << "長崎" << endl;
        }
    } else if (interest == 2) {
        // 自然
        if (30 * travel_days <= budget) {
            cout << "北海道" << endl;
        }
        if (18 * travel_days <= budget) {
            cout << "鳥取砂丘" << endl;
        }
        if (15 * travel_days <= budget) {
            cout << "阿蘇" << endl;
        }
    } else if (interest == 3) {
        // 歴史
        if (70 * travel_days <= budget) {
            cout << "ローマ" << endl;
        }
        if (40 * travel_days <= budget) {
            cout << "アンコールワット" << endl;
        }
        if (30 * travel_days <= budget) {
            cout << "鎌倉" << endl;
        }
    } else {
        // 1-3以外
        cout << "入力エラー" << endl;
    }

    return 0;
}