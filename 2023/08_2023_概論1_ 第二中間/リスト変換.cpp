#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string value;
    Node* next;
};

int main() {
    Node* head = NULL; // 先頭ポインタ
    Node* tail = NULL; // 末尾ポインタ

    // ノードの作成と値の設定
    Node* a = new Node{ "門司港", NULL };
    Node* b = new Node{ "佐賀", NULL };
    Node* c = new Node{ "博多", NULL };
    Node* d = new Node{ "二日市", NULL };
    Node* e = new Node{ "鳥栖", NULL };
    Node* f = new Node{ "新鳥栖", NULL };
    Node* g = new Node{ "小倉", NULL };
    Node* z = new Node{ "江北", NULL };

    // リストの連結
    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = z;
    tail = z;

    /************** これより上は変更禁止 **************/

    //ここに回答を記入
    a->next = g;
    g->next = c;
    f->next = b;
    b->next = z;
    /*別解
    // bの前のノードを見つける 
    Node* prevB = NULL; 
    Node* currentB = head; 
    while (currentB != NULL && currentB != b) { 
        prevB = currentB; currentB = currentB->next; 
        } 
    // gの前のノードを見つける 
        Node* prevG = NULL; 
        Node* currentG = head; 
        while (currentG != NULL && currentG != g) { 
            prevG = currentG; currentG = currentG->next; 
            } 
            
        // bとgを切り離す 
            if (prevB != NULL) 
                prevB->next = g; 
                else head = g; 
            if (prevG != NULL) 
                prevG->next = b; 
                else head = b; 
                
            // bの次のノードを保存 
            Node* nextB = b->next; 
            // bの次のノードをgの次のノードに設定 
            b->next = g->next; 
            // gの次のノードをbの次のノードとして設定 
            g->next = nextB;
    */
    /************** これより下は変更禁止 **************/

    // リストを表示
    Node* current = head;
    while (current != NULL) {
        cout << current->value << endl;
        current = current->next;
    }
}