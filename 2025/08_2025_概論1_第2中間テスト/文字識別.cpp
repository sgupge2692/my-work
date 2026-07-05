#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// 条件判定関数を詳細に実装
bool check_condition(char a, char b, char c, char d, char e, char f) {
    char chars[] = {a, b, c, d, e, f};

    // 1. AとDが同じ
    if(a!=d){
        return false; 
    }

    // 2. BとEが異なる && 同じ大文字・小文字グループ
    // (両方大文字 または 両方小文字)
    if(b!=e&&isupper(b) != isupper(e)){
        return false;
    }

    // 3. CとFが数字かつ偶数
    if(isdigit(c)!=isdigit(f)||c%2==0||f%2==0){
        return false;
    }

    // 4. 小文字は2つだけ，数字は2つだけ
    int lower_count=0,digit_count=0;

    for(char ch : chars){

    }
    return true;
}

int main() {
    ifstream file("number.txt");
    if (!file.is_open()) return 1;

    string lines[6];
    for (int i = 0; i < 6; i++) {
        if (!getline(file, lines[i])) return 1;
    }

    while (true) {
        if (check_condition(lines[0][0], lines[1][0], lines[2][0], 
                            lines[3][0], lines[4][0], lines[5][0])) {
            cout << lines[0][0] << lines[1][0] << lines[2][0] 
                 << lines[3][0] << lines[4][0] << lines[5][0] << endl;
        }

        for (int i = 0; i < 5; i++) lines[i] = lines[i + 1];
        if (!getline(file, lines[5])) break;
    }

    file.close();
    return 0;
}