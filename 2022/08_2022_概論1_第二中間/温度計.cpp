#include<fstream> 
#include<iostream> 
using namespace std; 
class Temperature { 
    public: double wet_temperature; 
    double globe_temperature; 
    double dryt_temperature; 
}; 
/************** これより上は変更禁止 **************/ 
//注：このままでは，コンパイルは通りません． 
void calculation(double *July1st_WBGT,Temperature *July1st_temperature) {
    *July1st_WBGT = 0.7*July1st_temperature->wet_temperature + 0.2*July1st_temperature->globe_temperature + 0.1*July1st_temperature->dryt_temperature;

} 
/************** これより下は変更禁止 **************/ 

int main() { 
    Temperature July1st_temperature; //7月1日の各種温度 
    double July1st_WBGT;    //7月1日の暑さ指数 
    cout << "湿球温度："; 
    cin >> July1st_temperature.wet_temperature; 
    cout << "黒球温度："; 
    cin >> July1st_temperature.globe_temperature; 
    cout << "乾球温度："; 
    cin >> July1st_temperature.dryt_temperature; 
    calculation(&July1st_WBGT, &July1st_temperature); 
    cout << "暑さ指数："; 
    cout << July1st_WBGT; 

    return 0;
}
