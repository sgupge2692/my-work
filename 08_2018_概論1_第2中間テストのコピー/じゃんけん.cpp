//じゃんけん
#define GU  0 
#define CHOKI 1 
#define PA  2 
#include <iostream> 
using namespace std; 
int main() { 
    int rps[5] = { 0, 0, 0, 0, 0 }; 
    int count[3] = { 0, 0, 0 }; 
    int i = 0; 
    int Win = 0, Lose = 0, Draw = 0; 
    cout <<"手の表示方法" << endl << "GU : 0, CHOKI : 1, PA : 2" << endl << endl; 
    for (i = 0; i < 5; i++) { 
        cout << i + 1 << "番目の人の手は？"; 
        cin >> rps[i]; 
        count[rps[i]]++; 
    } 
    cout << endl << "GU: " << count[0] << ", CHOKI: " << count[1] << ", PA: " << count[2] << endl; //ここより上は，改変不可 
    //ここに適切なプログラムを作成しなさい 
    if(count[0]==0&&count[1]!=0&&count[2]!=0){
        Win = count[1];
        Lose = count[2];
    }else if(count[0]!=0&&count[1]!=0&&count[2]==0){
        Win = count[0];
        Lose = count[1];
    }else if(count[0]!=0&&count[1]==0&&count[2]==0){
        Win = count[2];
        Lose = count[0];
    }else {
        Draw = 5;
    }

    //ここより下は，改変不可 
    cout << endl << "Win: " << Win << ", Lose: " << Lose << ", Draw: " << Draw << endl; 
    return 0;
}

