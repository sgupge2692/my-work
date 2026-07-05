/*貼付された図は，マリオがクリボー／キノコ／フラワーに接触した場合の状態遷移を示している．入力は，{1,2,3｝のいずれかとし，1:クリボー，2:キノコ，3:フラワーを示している．出力は，{0,1,2,3｝のいずれかとし，0:ゲーム終了，1:ちびマリオ，2:スーパーマリオ，3:ファイアマリオを示している．状態が，ゲーム終了となった場合は，プログラムを終了する．初期状態は1:ちびマリオとする．入力に応じて，現在の状態を出力するプログラムを作成しなさい．
*/
#include <iostream> 
using namespace std; 
int main(){
    int State = 1,in;
    while(State != 0){
        cin >>in;
        if(in==1){
            if(State==1){
                return 0;
            }else if(State == 2||State == 3){
                State = 1;
            }
        }else if(in==2){
            if(State == 1||State == 2){
                State = 2;
            }else if(State == 3){
                State = 3;
            }
        }else{
            State = 3;
        }
        cout<<State<<" ";
    }
    return 0; 
}