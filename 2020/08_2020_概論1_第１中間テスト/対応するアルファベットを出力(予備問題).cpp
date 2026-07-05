/*26個のアルファベットが，格納されている配列が以下のように定義されている． char　alphabet[26]　=　{　'S','A','I','B','X','O','Q','D','R','J', 'H','U','E','V','G','N','M','L','C','K','W','Y','Z','T','F','P'　}; 任意の自然数 num を入力すると，先頭から数えて num番目のアルファベットを 文字列から抽出して出力するプログラムを作りなさい． ただし，入力：1（1番目）をS，入力：26（26番目）をPとすること． また，値の入出力は以下の初期コードを使用するものとする．*/

#include <iostream>
using namespace std;

int main(){
    char alphabet[26] = { 'S','A','I','B','X','O','Q','D','R','J', 'H','U','E','V','G','N','M','L','C','K','W','Y','Z','T','F','P' };
    char letter;
    int num;

    cin >> num;
    letter = alphabet[num-1];
    cout << letter;
}