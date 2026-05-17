#include <iostream>
using namespace std;

int main() {
    int lot[10] = { 7851, 2453, 7906, 2919, 3811, 2438, 4453, 2335, 4456, 2867 };
    int prize1 = 0, prize2 = 0, prize3 = 0, prize4 = 0, win_num;

    cin >> win_num; //当選番号

    for(int i=0;i<10;i++){
        if(lot[i]==win_num){
            prize1++;
        }else if(lot[i]%1000==win_num%1000){
            prize2++;
        }else if(lot[i]%100==win_num%100){
            prize3++;
        }else if(lot[i]%10==win_num%10){
            prize4++;
        }

    }

    int prize_total = prize1 * 5000000 + prize2 * 100000 + prize3 * 5000 + prize4 * 300;
    cout << "当選枚数：" << prize1 + prize2 + prize3 + prize4 << endl;
    cout << "当選金額：" << prize_total << endl;
}
