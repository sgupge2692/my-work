/*自粛判定
*/
#include <iostream> 
#include <string> 
using namespace std; 
int main(){ 
    double P1; //①感染経路不明者の増加比 
    int    P2; //②新規陽性者におけるリンク不明者数 
    double P3; //③確定診断検査における陽性率 
    double P4; //④患者受入重症病床使用率 

    bool flag = false;
    
    for(int day = 0 ; day < 10 ; day++){ 
        cin >> P1 >> P2 >> P3 >> P4; 
        if(P1 >=1.0 && P2 >=10&&P3 >=0.07){
            flag = true;
        }else if(P2 < 10 && P3 < 0.07 && P4 < 0.6){
            flag = false;
        }
        if(flag == true){
            cout << "自粛要請" << endl; 
        }else{
            cout << "自粛解除" << endl; 
        }
    } 
    return 0;
}
