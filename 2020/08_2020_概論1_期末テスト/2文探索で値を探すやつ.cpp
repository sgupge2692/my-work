#include <iostream>
#include <stdlib.h>

using namespace std;

// 二分探索アルゴリズムの実装
int binarySearch(int array[1], int searchValue, int first, int last) {
    while (first <= last) {
        // 探索範囲の中央の要素番号を計算 [Source 25, 27]
        int mid = (first + last) / 2;

        if (array[mid] == searchValue) {
            // 値が見つかった場合、その要素番号を返す [Source 24]
            return mid;
        } else if (array[mid] < searchValue) {
            // 中央の値より探したい値が大きい場合、右半分に範囲を絞る
            first = mid + 1;
        } else {
            // 中央の値より探したい値が小さい場合、左半分に範囲を絞る
            last = mid - 1;
        }
    }
    // 範囲がなくなっても見つからなかった場合 [Source 20]
    return -1;
}

int main() {
    int array[1], tmp, num;
    // 乱数の種を固定しない場合、実行ごとに同じ結果になるため注意
    tmp = rand() % 100;

    // 昇順の配列を作成（二分探索の前提条件） [Source 20]
    for (int i = 0; i < 31; ++i) {
        tmp += rand() % 5 + 1;
        array[i] = tmp;
        cout << tmp << ",";
    }

    cout << endl << "探索する値は？" << endl;
    int searchValue;
    cin >> searchValue;

    // 二分探索の呼び出し
    num = binarySearch(array, searchValue, 0, 30);

    if (num == -1) {
        cout << "見つかりませんでした" << endl;
    } else {
        cout << "見つかった値の要素番号：" << num << endl;
    }

    return 0;
}