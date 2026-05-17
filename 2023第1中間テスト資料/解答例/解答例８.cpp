#include <iostream>
using namespace std;

int main() {
    int A_Timecard[100] = { 0 };	//すべての要素を0で初期化
    int B_Timecard[100] = { 0 };	//すべての要素を0で初期化
    int C_Timecard[100] = { 0 };	//すべての要素を0で初期化
    int A_in, A_out, B_in, B_out, C_in, C_out,TotalDuration=0;

    //A, B, Cの出勤時刻と退勤時刻を入力
    cin >> A_in >> A_out >> B_in >> B_out >> C_in >> C_out;

    /*ここに回答を記入*/
    for(int i=A_in;i<A_out;i++){
        A_Timecard[i]=1;
    }
    for(int i=B_in;i<B_out;i++){
        B_Timecard[i]=1;
    }
    for(int i=C_in;i<C_out;i++){
        C_Timecard[i]=1;
    }
    for(int i=0;i<99;i++){
        if(A_Timecard[i]==0&&B_Timecard[i]==0&&C_Timecard[i]==0){
            TotalDuration++;
        }
    }

    // 結果を出力
    cout << "誰も働いていない時間数：" << TotalDuration << endl;
}