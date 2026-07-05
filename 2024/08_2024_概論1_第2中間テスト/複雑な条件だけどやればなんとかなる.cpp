#include <iostream>
using namespace std;

int main() {
    int price;
    int pay;
    int sum = 0;
    int hackpay_total_budget = 5000;
    int techpay_total_budget = 10000;
    int cpluspay_total_budget = 6000;

    for (int i = 0; i < 3; i++) {
        int hackpay_personal_limit = 3000;
        int techpay_personal_limit = 5000;

        cout << "ユーザ: " << i << endl;
        cout << "(HackPay:1 TechPay : 2 CplusPay : 3) " << i << endl;
        cout << "種類 | 個人残 | 全体残" << endl;
        cout << "HackPay: " << hackpay_personal_limit << "円 " << hackpay_total_budget << "円" << endl;
        cout << "TechPay: " << techpay_personal_limit << "円 " << techpay_total_budget << "円" << endl;
        cout << "CplusPay: " << "---" << "円 " << cpluspay_total_budget << "円" << endl << endl;

        cout << "電子マネーの種類と値段を2回入力" << endl;
        for (int j = 0; j < 2; j++) {
            cin >> pay >> price;
            int rewards = 0;
            switch (pay) {
                /***************** 回答部分ここから *****************/
            case 1://HackPayで支払う場合
                rewards = price*0.25;
                if(rewards>2000){
                    rewards = 2000;
                }
                if(rewards>hackpay_personal_limit){
                    rewards = hackpay_personal_limit;
                }
                if(rewards > hackpay_total_budget){
                    rewards = hackpay_total_budget;
                }
                
                hackpay_personal_limit-=rewards;
                hackpay_total_budget-=rewards;
                break;
            case 2:    //TechPayで支払う場合
                rewards = price*0.15;
                if(rewards> 3000){
                    rewards = 3000;
                }
                if(rewards>techpay_personal_limit){
                    rewards = techpay_personal_limit;
                }
                if(rewards > techpay_total_budget){
                    rewards = techpay_total_budget;
                }
                
                techpay_personal_limit-=rewards;
                techpay_total_budget-=rewards;
                break;
            case 3:
                rewards = price*0.15;
                if(rewards>cpluspay_total_budget){
                    rewards = cpluspay_total_budget;
                    cpluspay_total_budget = 0;
                }else{
                    cpluspay_total_budget-=rewards;
                }
                break;
                /***************** 回答部分ここまで *****************/
            }
        }

        cout << "ユーザ: " << i << endl;
        cout << "種類 | 個人残 | 全体残" << endl;
        cout << "HackPay: " << hackpay_personal_limit << "円 " << hackpay_total_budget << "円" << endl;
        cout << "TechPay: " << techpay_personal_limit << "円 " << techpay_total_budget << "円" << endl;
        cout << "CplusPay: " << "---" << "円 " << cpluspay_total_budget << "円" << endl << endl;
    }

    cout << "電子マネー | 残予算" << endl;
    cout << "HackPay: " << hackpay_total_budget << "円" << endl;
    cout << "TechPay: " << techpay_total_budget << "円" << endl;
    cout << "CplusPay: " << cpluspay_total_budget << "円" << endl;

    return 0;   //終了前に表示画面を止めたい場合は，この行にブレークポイント
}