/*変数a,b,cは，いずれも100未満の自然数です． ただし，bは奇数です．また，cは3の倍数ではありません． [ (1/a)+(2/b)+(3/c)=1 ]を満たす自然数a,b,cの組合せを全て見つけて， 表示するプログラムを作成しなさい．

中山功一. 続けるC++プログラミング 中級者を目指す人にささげる問題集＆解答解説集: 実技試験×10年分 (p. 79). (Function). Kindle Edition. 
*/
#include <iostream>
#include <climits>

using namespace std;

int main() {
    for(int a=0;a<100;a++){
        for(int b=0;b<100;b++){
            for(int c=0;c<100;c++){
                if(b%2==1&&c%3!=0&&1.0/a+2.0/b+3.0/c==1.0){
                    cout<<"a:"<<a<<",b:"<<b<<",c:"<<c<<endl;
                }
            }
        }
    }
    return 0;
}