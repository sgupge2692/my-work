#include <iostream>

using namespace std;

int main() {
    // 料金設定
    int daytimeRate = 240;    // 開店から18:59までの30分料金
    int daytimeFree = 1160;   // 開店から18:59までのフリータイム料金
    int nighttimeRate = 350;  // 19:00から閉店までの30分料金
    int nighttimeFree = 1500; // 19:00から閉店までのフリータイム料金

    // 利用時間を入力
    int hoursIn, minutesIn, hoursOut, minutesOut;
    bool course; // 0:時間制, 1:フリータイム

    cout << "入室した時間（時 分）を入力してください: ";
    cin >> hoursIn >> minutesIn;
    cout << "退出した時間（時 分）を入力してください: ";
    cin >> hoursOut >> minutesOut;
    cout << "(時間制:0，フリータイム:1) ";
    cin >> course;

    int totalCost = 0;
    bool error = false;

    // 利用時間を分単位に計算
    int totalMinutes = (hoursOut * 60 + minutesOut) - (hoursIn * 60 + minutesIn);

    // --- エラーチェック ---
    // 営業時間（10:00〜23:59想定）外チェック
    if (hoursIn < 10 || hoursOut < 10) {
        error = true;
    } 
    // 時間帯（18時台までと19時以降）をまたぐ利用は不可
    else if ((hoursIn <= 18 && hoursOut >= 19)) {
        error = true;
    } 
    // 日をまたぐ利用、または終了時刻が開始時刻より早い場合
    else if (hoursIn > hoursOut || (hoursIn == hoursOut && minutesIn > minutesOut)) {
        error = true;
    } 
    // 30分未満の利用（0分〜29分）は不可
    else if (totalMinutes < 30) {
        error = true;
    }

    // --- 料金計算 ---
    if (error) {
        totalCost = 100000; // エラー時の特殊値
    } else {
        // 30分単位の計算（端数切り上げのため +1 しない論理に変更推奨の場合もありますが、
        // 書籍の意図を汲み、元のコードの「+1」ロジックを保持しています）
        int units = totalMinutes / 30;
        
        if (hoursIn <= 18) { // 昼の部
            if (course) {
                totalCost = daytimeFree;
            } else {
                totalCost = daytimeRate * (units + 1);
            }
        } else { // 夜の部
            if (course) {
                totalCost = nighttimeFree;
            } else {
                totalCost = nighttimeRate * (units + 1);
            }
        }
    }

    cout << "料金は " << totalCost << " 円です" << endl;

    return 0;
}