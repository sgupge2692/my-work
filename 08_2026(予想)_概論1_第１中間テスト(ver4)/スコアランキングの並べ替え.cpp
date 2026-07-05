/*********************************************************
プログラミング概論 1（第 1 中間試験）：問 2
   学籍番号：X X23 X XXX 氏名 XXXXXX
   提出日：2026 年 5 月 20 日
**********************************************************/
#include <iostream>
using namespace std;

int main() {
    int id[5], score[5];
    for(int i=0; i<5; i++) cin >> id[i] >> score[i];
    // ここにソートと出力のロジックを記述
    int tmp,tmp_id;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(score[i]<score[j]){
                tmp = score[i];
                score[i] = score[j];
                score[j] = tmp;
                tmp_id = id[i];
                id[i] = id[j];
                id[j] = tmp_id;
            }else if(score[i]==score[j]){
                if(id[i]>id[j]){
                    tmp = score[i];
                    score[i] = score[j];
                    score[j] = tmp;
                    tmp_id = id[i];
                    id[i] = id[j];
                    id[j] = tmp_id;
                }
            }

        }
    }
    for(int i=0;i<5;i++){
        cout<<id[i]<<":"<<score[i]<<endl;
    }

    return 0;
}