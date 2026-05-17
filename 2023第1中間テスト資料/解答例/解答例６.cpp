#include <iostream>
#define PASSING_SCORE 60  //合格点数
#define FAIL_SCORE 30     //赤点となる点数
#define MAX_ATTEMPTS 10   //最大受験回数
#define MAX_FAILURES 2    //最大赤点回数
using namespace std;

int main() {
    int attempts = 0;           //試行回数
    int consecutive_passes = 0; //連続合格回数
    int failures = 0;           //赤点回数
    int score;                  //入力された点数

    //各回の点数の入力
    for(attempts = 0;attempts<MAX_ATTEMPTS;attempts++){
        cout << attempts + 1 << "日目の点数:";
        cin >> score;

    //各回の結果の出力
        if(score>=60){
        cout << "合格" << endl;
        consecutive_passes++;
        }else if(score>=30){
        cout << "不合格" << endl;
        consecutive_passes=0;
        }else{
        cout << "赤点不合格：次回受験不可" << endl;
        attempts++;
        failures++;
        if(failures>=MAX_FAILURES){
                cout << "留年" << endl;
                break;
        }
        }
    //卒業判定結果の出力)
        if(consecutive_passes>=3){
        cout << "卒業" << endl;
        break;
        }
        if(attempts>=MAX_ATTEMPTS){
        cout << "留年" << endl;
        }
    }
}