#include <iostream>
using namespace std; 
int main() { 
    
    double data[44640], new_data[31][24][60]; 
    int day, hour, minutes, i; 
    for (i = 0; i < 44640; i++) { 
        data[i] = (double)i; 
        //採点の都合上，ダミーデータを入れます 
        } 
        //データをnew_dataにコピー
        /*for(i = 0; i < 44640; i++){
            new_data[i/1440][(i%1440)/60][i%60] = data[i];
        }*/
        for(i = 0; i < 31; i++){
            for(int j = 0; j < 24; j++){
                for(int k = 0; k < 60; k++){
                    new_data[i][j][k] = data[i*1440 + j*60 + k];
                }
            }
        }

        cout << "日，時，分を入力して下さい" << endl; 
        cin >> day >> hour >> minutes; 
        
        cout <<"その時の室温：" << new_data[day - 1][hour][minutes]; 
                
    return 0;
}
