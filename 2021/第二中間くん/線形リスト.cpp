#include <iostream>
#include <string>

using namespace std;

// ノードクラスの定義
class Node {
public:
    string value;
    Node* next;
};

int main() {
    int num;
    string moji;

    Node* head = NULL;    // 先頭ポインタ
    Node* tail = NULL;    // 末尾ポインタ
    Node* current = NULL; // 現在ポインタ

    // ノードの生成（a, b, c, d, e, z）
    Node* a = new Node;
    Node* b = new Node;
    Node* c = new Node;
    Node* d = new Node;
    Node* e = new Node;
    Node* z = new Node;

    a->value = "あ";
    b->value = "い";
    c->value = "う";
    d->value = "え";
    e->value = "お";

    // 連結リストの構築
    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = z;
    tail = z;

    // 入力
    cout << "後ろに追加するノード番号（0～4）は？" << endl;
    cin >> num;
    cout << "追加するノードの要素（string型）は？" << endl;
    cin >> moji;

    // 挿入処理
    current = head;
    
    // num番目のノードまで移動
    for (int i = 0; i < num; i++) {
        current = current->next;
    }

    // 新しいノードを作成して挿入
    Node* add = new Node;
    add->value = moji;
    
    // 挿入の仕組み：新しい橋を架けてから、古い接続を切り替える
    add->next = current->next; 
    current->next = add;

    // 挿入後の表示
    current = head;
    while (current != tail) {
        cout << current->value;
        current = current->next;
    }
    cout << endl;

    return 0;
}