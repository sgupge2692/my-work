#include <iostream>
#include <cstdlib>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;
};

int r_num = 0;
int rand_num[256] = { 3, 7, 0, 0, 1, 5, 8, 1, 8, 8, 1, 3, 1, 9, 6, 0, 0, 6, 4, 0, 0, 2, 9, 9, 5, 8, 2, 8, 4, 6, 4, 1, 6, 2, 1, 4, 4, 9, 2, 0, 1, 7, 7, 3, 3, 6, 7, 6, 2, 6, 6, 0, 5, 6, 4, 8, 7, 4, 5, 9, 4, 2, 7, 6, 7, 1, 3, 8, 1, 0, 4, 3, 2, 0, 0, 1, 4, 7, 8, 8, 3, 2, 3, 0, 2, 4, 7, 9, 3, 1, 5, 6, 9, 8, 5, 4, 9, 9, 3, 8, 4, 9, 0, 7, 8, 1, 6, 5, 9, 2, 8, 0, 7, 1, 3, 5, 5, 7, 9, 1, 1, 7, 8, 1, 6, 6, 5, 9, 0, 8, 3, 7, 4, 1, 0, 8, 7, 7, 6, 0, 6, 1, 8, 1, 8, 5, 8, 7, 3, 3, 4, 2, 7, 4, 4, 9, 5, 8, 1, 6, 3, 9, 2, 0, 0, 6, 1, 1, 0, 8, 2, 6, 4, 0, 4, 3, 1, 5, 9, 2, 6, 2, 7, 8, 7, 0, 5, 9, 7, 2, 0, 6, 6, 5, 6, 9, 3, 6, 4, 1, 5, 9, 3, 8, 7, 3, 6, 5, 3, 4, 3, 5, 3, 9, 5, 3, 3, 6, 6, 7, 2, 9, 4, 3, 3, 3, 1, 3, 4, 0, 7, 7, 8, 1, 9, 7, 3, 6, 4, 4, 0, 1, 9, 9, 3, 0, 7, 5, 8, 9, 9, 6, 2, 3, 3, 2 };

Node* Initialize(int level) {
    Node* node = new Node();
    node->value = rand_num[r_num++];
    node->left = NULL;
    node->right = NULL;
    if (level > 0) {
        node->left = Initialize(level - 1);
        node->right = Initialize(level - 1);
    }
    return node;
}

int GetDepth(Node* node) {
    if (node == NULL) return 0;
    int l = GetDepth(node->left);
    int r = GetDepth(node->right);
    int result;
    if (l > r) {
        result = l;
    } else {
        result = r;
    }
    return result + 1;
}

void PrintLevel(Node* node, int level) {
    if (node == NULL) return;
    if (level == 0) {
        cout << node->value << " ";
    } else {
        PrintLevel(node->left, level - 1);
        PrintLevel(node->right, level - 1);
    }
}

void PrintTreeLevels(Node* root) {
    int depth = GetDepth(root);
    for (int i = 0; i < depth; i++) {
        PrintLevel(root, i);
        cout << endl;
    }
}

// 差分木の構築と部分木合計の計算
Node* BuildDiffTree(Node* original, int& sum_out) {
    if (original == NULL) {
        sum_out = 0;
        return NULL;
    }
    if (original->left == NULL && original->right == NULL) {
        // 葉ノードは差分0
        sum_out = original->value;
        Node* leaf_diff = new Node();
        leaf_diff->value = 0;
        leaf_diff->left = NULL;
        leaf_diff->right = NULL;
        return leaf_diff;
    }

    int left_sum = 0, right_sum = 0;
    //左の部分木の値を再帰的に計算
    Node* left_diff = BuildDiffTree(original->left,left_sum);
    //右の部分木の値を再帰的に計算
    Node* right_diff = BuildDiffTree(original->right,right_sum);
    //左右の部分木の値の差の絶対値を計算
    int diff = abs(left_sum - right_sum);
    // 元の木のノード値と差分を比較し，大きい方を差分木のノード値に
    int node_val;
    Node* new_node = new Node();
    return new_node;
}

int main() {
    int level;
    cin >> level;
    Node* root = Initialize(level);
    cout << "生成された木構造：" << endl;
    PrintTreeLevels(root);
    int total_sum = 0;
    Node* diff_root = BuildDiffTree(root, total_sum);
    cout << "差分木構造：" << endl;
    PrintTreeLevels(diff_root);
    return 0;
}