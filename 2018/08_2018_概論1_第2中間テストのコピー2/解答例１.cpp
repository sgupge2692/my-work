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
  if (count[0] == 5 || count[1] == 5 || count[2] == 5) {
        Draw = 5; 
    } else if (count[0] == 0) { 
        // GUがない → CHOKI(1) vs PA(2) → CHOKIの勝ち
        Win = count[1]; 
        Lose = count[2]; 
    } else if (count[1] == 0) { 
        // CHOKIがない → PA(2) vs GU(0) → PAの勝ち
        Win = count[2]; 
        Lose = count[0]; 
    } else if (count[2] == 0) { 
        // PAがない → GU(0) vs CHOKI(1) → GUの勝ち
        Win = count[0]; 
        Lose = count[1]; 
    } else { 
        // 3種類すべて出ている → 引き分け
        Draw = 5; 
    }

    //ここより下は，改変不可 
    cout << endl << "Win: " << Win << ", Lose: " << Lose << ", Draw: " << Draw << endl; 
    return 0;
}

