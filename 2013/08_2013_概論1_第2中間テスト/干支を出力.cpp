/*西暦を入力すると，その年の干支を表示するプログラムを作成しなさい．
 */
#include<iostream> 
using namespace std; 
int main() { 
    int N; 
    int eto; //西暦を入力 
    cout << "西暦を入力してください"  << endl; 
    cin >> N; //干支を表示 
    eto = N % 12; 
    switch (eto) { 
        case 0: cout << "申"; 
        break; 
        case 1: 
        cout << "酉"; 
        break; 
        case 2: 
        cout << "戌"; 
        break; 
        case 3: 
        cout << "亥"; 
        break; 
        case 4: 
        cout << "子"; 
        break; 
        case 5: 
        cout << "丑"; 
        break; 
        case 6:
        cout << "寅";
        break; 
        case 7: 
        cout << "卯"; 
        break; 
        case 8: 
        cout << "辰"; 
        break; 
        case 9: 
        cout << "巳"; 
        break; 
        case 10: 
        cout << "午"; 
        break; 
        case 11: 
        cout << "未"; 
        break; 
    } 
    cout << "年です" << endl; 
    return 0;
}
