/*入力ファイルの各行の先頭に行番号をつけて，２番目の単語（トークン）のみを表示するプログラムを作りなさい．
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
   
   ifstream file;
   string line;
   char ch;
   int line_num = 1,word_num=1;

   file.open("test.txt");
   if(!file){
    cout << "ファイルが開けません" <<endl;
    return 0;
   }

   ch = file.get();
   cout << line_num <<":";

   while(!file.eof()){
    if(ch == '/n'){
        line_num++;
        cout << endl << line_num << ":";
    }

    if(isspace(ch)){
        word_num++;
    }

    if(word_num == 2){
        cout << ch;
    }

    ch = file.get();

   }
   file.close();
    return 0;
}