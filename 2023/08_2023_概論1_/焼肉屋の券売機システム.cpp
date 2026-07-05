/*焼肉屋の券売機システム*/
#include<iostream> 
using namespace std; 
int main() { 
    int loin = 0; 
    int shortrib = 0; 
    int porkloin = 0; 
    int beer = 0; 
    int oolong = 0; 
    int price; 
    cin >> price; 
    /* 回答ここから*/ 
    while(price>=300){
        if(price>=900){
            price -=900;
        cout << "牛ロース" << endl;
        }else if(price>=700){
            price -=700; 
        cout << "牛カルビ" << endl;
        }else if(price>=650){ 
            price -=650;
        cout << "豚ロース" << endl;
        }else if(price>=500){
            price -=500;
        cout << "ビール" << endl;
        }else if(price>=300){ 
            price -=300;
        cout << "ウーロン茶" << endl;
        } 
    }
    /*回答ここまで*/ 
    
    if (price < 0) { 
        cout << "入力エラー．正の数を入力してください．" << endl; 
    } else { 
        cout <<"お釣り:" << price <<"円" << endl; 
    } 
    return 0;

}
