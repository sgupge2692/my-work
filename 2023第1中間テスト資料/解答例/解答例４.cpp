#include <iostream>
#include <string>
using namespace std;

int main() {

    int score[40] = { -1,82,44,75,54,31,68,80,39,49,86,32,57,65,85,57,46,71,77,51,26,81,93,32,95,56,70,57,86,50,37,68,63,83,38,68,45,65,47,51 };
    int choice; //1:平均値、2:最高点と最低点、3:成績の分布
    cin >> score[0];	//最初のひとりの点数
    cin >> choice;

    double total=0;

    switch(choice){
        case 1:{
            for(int i=0;i<40;i++){
                total+=(double)score[i];
            }
            //score[40]の平均値を求める
        double average = 0.0;
        average = total/40.0;
        cout << "平均値: " << average << endl;
        break;
        }
        case 2:{
            int tmp=0;
            for(int i=0;i<40;i++){
                for(int j=i+1;j<40;j++){
                    if(score[i]>score[j]){
                        tmp=score[i];
                        score[i]=score[j];
                        score[j]=tmp;
                    }
                }
            }
             //score[40]の最高点と最低点を求める
            int max_score = score[39];
            int min_score = score[0];
            cout << "最高点: " << max_score << endl;
            cout << "最低点: " << min_score << endl;
            break;
        }
        case 3:{
            //score[40]の成績の分布を求める．
            //秀：90点以上
            //優：80～89点
            //良：70～79点
            //可：60～69点
            //不可：59点以下
            int count_syu = 0;
            int count_yu = 0;
            int count_ryo = 0;
            int count_ka = 0;
            int count_huka = 0;
                for(int i=0;i<40;i++){
                if(score[i]>=90){
                    count_syu++;
                }else if(score[i]>=80){
                    count_yu++;
                }else if(score[i]>=70){
                    count_ryo++;
                }else if(score[i]>=60){
                    count_ka++;
                }else{
                    count_huka++;
                }
                }

            cout << "秀: " << count_syu << endl;
            cout << "優: " << count_yu << endl;
            cout << "良: " << count_ryo << endl;
            cout << "可: " << count_ka << endl;
            cout << "不可: " << count_huka << endl;
        }
    }

   
    
    
           
}