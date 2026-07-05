#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    int votes;
    Node* next;
};

Node* field_head; // 先頭ノードのアドレス
Node* field_tail; // 末尾ノードのアドレス
Node* field_current; // 現在ノードのアドレス
Node* field_tmp; // 暫定ノードのアドレス

void Initialize() {
    field_head = new Node();
    field_current = field_head;
    field_current->name = "シチュー";
    field_current->votes = 0;
    field_current->next = new Node();
    field_current = field_current->next;
    field_current->name = "カレー";
    field_current->votes = 0;
    field_current->next = new Node();
    field_current = field_current->next;
    field_current->name = "ハンバーグ";
    field_current->votes = 0;
    field_current->next = new Node();
    field_current = field_current->next;
    field_current->name = "ナポリタン";
    field_current->votes = 0;
    field_current->next = new Node();
    field_current = field_current->next;
    field_current->name = "ステーキ";
    field_current->votes = 0;
    field_current->next = new Node();
    field_current = field_current->next;
    field_current->name = "ピザ";
    field_current->votes = 0;
    field_current->next = new Node();
    field_current = field_current->next;
    field_current->name = "dummy";
    field_current->votes = 0;
    field_current->next = NULL;
    field_tail = field_current;
}

void Display() {
    field_current = field_head;
    while (field_current->name != "dummy") {
        cout << field_current->name << " (" << field_current->votes << " votes)" << endl;
        field_current = field_current->next;
    }
    cout << endl;
}

void Vote(string menu_name) {
    field_current = field_head;
    while (field_current->name != "dummy") {
        if (field_current->name == menu_name) {
            field_current->votes++;
            break;
        }
        field_current = field_current->next;
    }
}

void SortByVotes() {
    // ダミーヘッドを作成してリンクリストの先頭に設定
    Node* sorted_head = new Node();
    sorted_head->next = field_head;
    Node* max_prev; // 最大投票数を持つノードの前のノード
    Node* max_node; // 最大投票数を持つノード
    Node* sorted_current = sorted_head; // ソートされた部分の最後のノード
    Node* prev; // 現在のノードの前のノード

    /***************** 回答部分ここから *****************/
    while (sorted_current->next->name != "dummy") {
        field_current = sorted_current->next;
        max_node = field_current;
        max_prev = sorted_current;
        prev = field_current;

        while (prev->next->name != "dummy") {
            if (prev->next->votes > max_node->votes) {
                max_node = prev->next;
                max_prev = prev;
            }
            prev = prev->next;
        }

        if (max_node != sorted_current->next) {
            max_prev->next = max_node->next;
            max_node->next = sorted_current->next;
            sorted_current->next = max_node;
        }
        sorted_current = sorted_current->next;
    }
    /***************** 回答部分ここまで *****************/

    // ソートされたリストの先頭を設定
    field_head = sorted_head->next;
    delete sorted_head; // ダミーヘッドを削除
}

void Delete(int num) {
    field_tmp = field_head;
    field_current = field_head;
    if (num == 1) {
        field_head = field_head->next;
        delete field_tmp;
    } else {
        for (int i = 1; i < num; i++) {
            field_tmp = field_current;
            field_current = field_current->next;
        }
        field_tmp->next = field_current->next;
        delete field_current;
    }
}

int main() {
    Initialize();
    cout << "メニューを表示:" << endl;
    Display();
    string votes[10];
    cout << "10人の投票を入力してください:" << endl;
    for (int i = 0; i < 10; i++) {
        getline(cin, votes[i]);
        Vote(votes[i]);
    }
    SortByVotes();
    cout << "投票結果後のメニュー:" << endl;
    Display();
    Delete(6);
    cout << "トップ5メニュー:" << endl;
    Display();

    return 0;   //終了前に表示画面を止めたい場合は，この行にブレークポイント
}