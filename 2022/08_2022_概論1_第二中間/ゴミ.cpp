#include<iostream> 
using namespace std; 
int x, y, d;
//外部変数 
int flag = true; //trueで継続，falseで終了 
int field[9][9] = { 0 }; //全ての要素を0で初期化 

void move() { 
    switch (d) { 
        case 0: 
        y -= 1; 
        if (y < 0) { flag = false; } 
        break; 
        case 1: 
        x += 1; 
        if (x > 8) { flag = false; } 
        break; 
        case 2: 
        y += 1; 
        if (y > 8) { flag = false; } 
        break; 
        case 3: 
        x -= 1; 
        if (x < 0) { flag = false; } 
        break; 
    } 
} 

/************** これより上は変更禁止 **************/ 
void swirl() { 
    //ここにプログラムを作成しなさい 
    int i=1;
    
    while (flag == true) {
    int judge = (i + 1) / 2; // 今の i で一辺の長さを決める
    
    for (int j = 1; j <= judge; j++) {
        field[y][x] = i % 10; // ⚠️一辺を進む間、i はずっと同じ値
        move();
        if (flag == false) break;
    }
    
    d = (d + 1) % 4;
    i++; // ⬅️ 【重要】1マスごとではなく、「1辺」進むごとに i を1増やす
}
} 

/************** これより下は変更禁止 **************/ 
int main() { 
    cout << "初期位置は，何行目ですか？（ｙ）" << endl; 
    cin >> y;  //0以上9未満の値が正しく入力される 
    cout << "初期位置は，何列目ですか？（ｘ）" << endl; 
    cin >> x;  //0以上9未満の値が正しく入力される 
    // field[y][x] = 1; //初期位置に1を入力 
    cout << "初期方向は？" << endl; 
    cin >> d;//0:上, 1:右, 2:下, 3:左が正しく入力される 
    swirl(); 
    for (y = 0; y < 9; y++) { 
        for (int x = 0; x < 9; x++) { 
            cout << field[y][x];  //fieldの要素の値の表示 
            } 
        cout << endl; 
    } 
    return 0;
}
