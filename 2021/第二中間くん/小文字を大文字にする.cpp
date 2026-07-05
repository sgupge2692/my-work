#include <iostream>
#include <string>
#include <cstdio>  // <stdio.h> のC++推奨形式
#include <cctype>  // toupper を使うために必要

using namespace std;

// 文字列のポインタを受け取り、大文字に変換する関数
void change(char* p) {
    for (int i = 0; i < 7; i++) {
        p[i] = toupper(p[i]);
    }
}

int main() {
    char str[8];

    // 文字列の入力
    for (int i = 0; i < 7; i++) {
        cin >> str[i];
    }
    str[7] = '\0'; // 文字列の終端記号（null文字）を設定

    // 大文字変換の実行
    change(str);

    // 結果の表示
    printf("%s\n", str);

    return 0;
}