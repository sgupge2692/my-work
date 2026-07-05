#include <iostream> 
using namespace std; 
int main() { 
    double temp[30], hum[30]; 
    for (int day = 0; day < 30; day++) { 
        cin >> temp[day] >> hum[day]; // 判定に必要な日数が足りない場合はNormal 
        if (day < 2) { 
            cout << "Normal" << endl; 
            continue;//forループ内でこれ以降の処理をスキップし，次のループ(翌日：day++)に進む 
            } 
            // Critical条件判定 
        if (day >= 3&&(temp[day] >= 30.0 && hum[day] >= 50.0)&&temp[day-3]<temp[day-2]&&temp[day-2]<temp[day-1]){ 
            cout << "Critical" << endl; 
            continue;   //forループ内でこれ以降の処理をスキップし，次のループ(翌日：day++)に進む 
            } 
                
            // High条件判定 
        if (day >= 6) { 
            double avg_cur_temp = 0.0, avg_cur_hum = 0.0; 
            double avg_prev_temp = 0.0, avg_prev_hum = 0.0;
            if((temp[day]<temp[day-1]*0.9&&hum[day]<hum[day-1]*0.9)||(temp[day-1]<temp[day-2]*0.9&&hum[day-1]<hum[day-2]*0.9)){
                cout << "High" << endl;
                continue;  //forループ内でこれ以降の処理をスキップし，次のループ(翌日：day++)に進む 
            } 
        }
              
            // Low条件判定
        if(temp[day]<20.0&&hum[day]<40.0){ 
            if((temp[day]<temp[day-1]*0.9&&temp[day-1]<temp[day-2]*0.9)||(hum[day]<hum[day-1]*0.9&&hum[day-1]<hum[day-2]*0.9))
            cout << "Low" << endl; 
            continue;
        }   //forループ内でこれ以降の処理をスキップし，次のループ(翌日：day++)に進む 
            // どれにも該当しなければNormal 
            cout << "Normal" << endl; 
            } 
            return 0; 
    }
