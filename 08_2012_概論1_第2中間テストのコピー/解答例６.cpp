#include <iostream>
using namespace std;

int main() {
    double length, width, height;
    int displacement;

    cout << "全長（m）：";
    cin >> length;
    cout << "全幅（m）：";
    cin >> width;
    cout << "全高（m）：";
    cin >> height;
    cout << "排気量（cc）：";
    cin >> displacement;

    /* ここに回答を記入 */
    if(length<=3.4&&width<=1.48&&height<=2.0&&displacement<=660){
        cout << "軽自動車" << endl;
    }else if(length<=4.7&&width<=1.7&&height<=2.0&&displacement<=2000){
        cout << "小型乗用車" << endl;
    }else{
        cout << "普通乗用車" << endl;
    }
    return 0;
}