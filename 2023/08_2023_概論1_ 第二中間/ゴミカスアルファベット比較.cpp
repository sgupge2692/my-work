#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// 関数: アルファベット順を比較する
bool compareWords(const string& a, const string& b) {
    return a < b; // "a < b"なら昇順なので"true"
}

int main() {
    ifstream file("sample.txt");

    // ファイルを読み込めなかったときの処理
    if (!file) {
        cout << "ファイルを開くことができませんでした" << endl;
        return 0;
    }

    const int maxWords = 100;           // 単語数は最大100個
    string all_words[maxWords];         // すべての単語を格納する配列
    string duplication_words[maxWords]; // そのうち重複単語を格納する配列
    int all_count = 0;                  // すべての単語数
    int dup_count = 0;                  // 重複単語数

    string word;
    // ファイルから1単語ずつ読み込み，変数wordに代入
    while (file >> word) {
        bool isDuplicate = false;

        // “すべての単語配列”の既出単語と重複するかチェック
        for (int i = 0; i < all_count; i++) {
            if (all_words[i] == word) {
                isDuplicate = true;
                break;
            }
        }

        // “すべての単語配列”に重複がない場合
        if (isDuplicate == false) {
            all_words[all_count] = word;
            all_count++; // すべての単語配列に追加
        } 
        // “すべての単語配列”に重複がある場合
        else {
            bool isDuplicate_Dup = false; // “重複単語配列”の既出単語と重複するかチェック
            for (int i = 0; i < dup_count; i++) {
                if (duplication_words[i] == word) {
                    isDuplicate_Dup = true;
                    break;
                }
            }
            // 重複単語配列にまだ追加されていないなら追加
            if (isDuplicate_Dup == false) {
                duplication_words[dup_count] = word;
                dup_count++;
            }
        }
    }

    // “重複単語配列”を昇順にソート
    sort(duplication_words, duplication_words + dup_count, compareWords);

    // ソートされた重複単語配列から単語を出力
    for (int i = 0; i < dup_count; i++) {
        cout << duplication_words[i] << endl;
    }

    return 0;
}