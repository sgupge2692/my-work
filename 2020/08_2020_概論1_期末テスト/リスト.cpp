#include <iostream>
#include <string>

#define APPEND 1
#define INSERT 2
#define REMOVE 3
#define QUIT 4

using namespace std;

class Element {
public:
    string data = "";
    Element* next = NULL;
};

// リストの末尾（tailの手前）にデータを追加する
void append(Element* current, Element* tail, string input) {
    // tailの一つ前のノードまで移動する [Source 33]
    while (current->next != tail) {
        current = current->next;
    }
    // 新しいノードを作成し、ポインタを繋ぎ変える [Source 35, 42]
    Element* new_element = new Element;
    new_element->data = input;
    new_element->next = tail;
    current->next = new_element;
}

// 指定した位置（1から始まる）にデータを挿入する
void insert(Element* current, int position, string input) {
    // 挿入したい場所の「一つ手前」のノードまで移動する [Source 35]
    for (int i = 0; i < position - 1; i++) {
        if (current->next == NULL) return; // 範囲外エラー防止
        current = current->next;
    }
    // 新しいノードを間に挟む [Source 35, 43]
    Element* new_element = new Element;
    new_element->data = input;
    new_element->next = current->next;
    current->next = new_element;
}

// 指定した位置（1から始まる）のデータを削除する
void remove(Element* current, int position, Element* tail) {
    // 削除したいノードの「一つ手前」まで移動する [Source 34]
    for (int i = 0; i < position - 1; i++) {
        if (current->next == tail) return; // 削除対象がない場合
        current = current->next;
    }
    
    Element* target = current->next; // 削除対象のノード
    if (target == tail) return;      // tailは削除してはいけない

    // 対象を飛ばしてポインタを繋ぎ、メモリを解放する [Source 34, 36, 43]
    current->next = target->next;
    delete target;
}

int main() {
    int command = -1;
    Element* head = new Element;
    Element* tail = new Element;
    Element* current;

    head->data = "head";
    head->next = tail;
    tail->data = "tail";
    tail->next = NULL;

    string input;
    int position;

    while (true) {
        cin >> command;
        switch (command) {
        case APPEND:
            cin >> input;
            append(head, tail, input);
            break;
        case INSERT:
            cin >> position;
            cin >> input;
            insert(head, position, input);
            break;
        case REMOVE:
            cin >> position;
            remove(head, position, tail);
            break;
        case QUIT:
            return 0;
        default:
            return 0;
        }

        // リストの内容を表示（headとtailは除外） [Source 33]
        current = head;
        while (current->next != tail) {
            current = current->next;
            cout << current->data << ",";
        }
        cout << endl;
    }
}