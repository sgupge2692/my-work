#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int total;  //支払総額
    cin >> total;
    int m2_cnt, m1_cnt, b4_cnt, b3_cnt; //学年ごとの参加人数
    cin >> m2_cnt >> m1_cnt >> b4_cnt >> b3_cnt;
    int rm2, rm1, rb4, rb3; //学年ごとの支払い割合
    cin >> rm2 >> rm1 >> rb4 >> rb3;

    // 有効な割合の合計を計算
    int sum_ratio = 0;
    sum_ratio += rm2;
    sum_ratio += rm1;
    sum_ratio += rb4;
    sum_ratio += rb3;

    // 目標割合（int型 / int型でdouble型を求めるので，型変換して計算）
    double tm2 = (double)rm2 / (double)sum_ratio;
    double tm1 = (double)rm1 / (double)sum_ratio;
    double tb4 = (double)rb4 / (double)sum_ratio;
    double tb3 = (double)rb3 / (double)sum_ratio;

    bool found = false;  // 組み合わせが見つかったか
    double best_error = 1000000000; //誤差の最小値（仮に大きな数字を入れておく）
    int best_m2 = 0, best_m1 = 0, best_b4 = 0, best_b3 = 0;

    for (int m2 = 0; m2 <= total; m2 += 100) {
        for (int m1 = 0; m1 <= total; m1 += 100) {
            for (int b4 = 0; b4 <= total; b4 += 100) {
                for (int b3 = 0; b3 <= total; b3 += 100) {
                    // 最大最小差チェック
                    int max_val = m2;
                    if(max_val<m1){
                        max_val = m1;
                    }
                    if(max_val<b4){
                        max_val = b4;
                    }
                    if(max_val<b3){
                        max_val = b4;
                    }


                    int min_val = m2;
                    if(min_val>m1){
                        min_val = m1;
                    }
                    if(min_val>b4){
                        min_val = b4;
                    }
                    if(min_val>b3){
                        min_val = b4;
                    }
                    // 実支払合計
                    int sum = 0;
                   sum += (m2_cnt)*m2; 
                   sum += (m1_cnt)*m1; 
                   sum += (b4_cnt)*b4; 
                   sum += (b3_cnt)*b3;

                    
                    //最大最小差が1000円以内で，支払合計額が一致したら
                    if ((max_val - min_val <= 1000) && (sum == total)) {
                        found = true; //組合せは存在した
                        // 各学年の実支払割合
                     double real_m2 = 0; 
                     real_m2 += m2_cnt * m2; 
                     real_m2 /= total; 
                     double real_m1 = 0; 
                     real_m1 += m1_cnt * m1; 
                     real_m1 /= total; 
                     double real_b4 = 0; 
                     real_b4 += b4_cnt * b4; 
                     real_b4 /= total; 
                     double real_b3 = 0; 
                     real_b3 += b3_cnt * b3; 
                     real_b3 /= total;
                        
                        // 実支払割合と目標割合との差（誤差の2乗和）
                        double error = (real_m2 - tm2) * (real_m2 - tm2) + (real_m1 - tm1) * (real_m1 - tm1) + (real_b4 - tb4) * (real_b4 - tb4) + (real_b3 - tb3) * (real_b3 - tb3);
                        
                        // 誤差が現時点で最小なら出力する候補として保存
                        // ただし，1万分の1以下の差は，計算誤差として無視して比較
                        if (error <= best_error + 0.0001) {
                            best_error = error;
                            best_m2 = m2;
                            best_m1 = m1;
                            best_b4 = b4;
                            best_b3 = b3;
                        }
                    }
                }
            }
        }
    }

    if (found == true) {
        cout << best_m2 << " " << best_m1 << " " << best_b4 << " " << best_b3 << endl;
    } else {
        cout << "割り勘不可能" << endl;
    }

    return 0;
}