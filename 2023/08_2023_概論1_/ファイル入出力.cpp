/*ファイル入出力*/
#include <iostream>
#include <fstream>  // ファイルの入出力用
#include <cctype>   // toupper, tolower用
#include <string>   // 文字列操作用

using namespace std;

int main() {
    // sample.txtファイルを開く
    ifstream file("sample.txt");
    string line;

    // ファイルが開けたときの処理
    if (file.is_open()) {
        // ファイルから1行読み込む
        if (getline(file, line)) {
            string transformedLine = ""; // 変換後の文字列を格納する変数

            // line[i] != '\0' は文字列の終端までループする条件
            // ※提示コードの'¥0'は環境により'\'に置き換えてください
            for (int i = 0; line[i] != '\0'; i++) {
                char c = line[i];

                if (islower(c)) {
                    // 小文字であれば大文字に変換
                    transformedLine += (char)toupper(c);
                } else if (isupper(c)) {
                    // 大文字であれば小文字に変換
                    transformedLine += (char)tolower(c);
                } else {
                    // 英字以外（スペースや記号など）はそのまま追加
                    transformedLine += c;
                }
            }
            // 変換後の行を標準出力に表示
            cout << transformedLine << endl;
        }
        file.close(); // ファイルを閉じる
    } 
    // ファイルが開けないときの処理
    else {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    return 0;
}