#include <iostream>

using namespace std;

int main() {
    double height[5], height_max = 0.0, height_ave = 0.0, height_variance = 0.0;
    double weight[5], weight_max = 0.0, weight_ave = 0.0, weight_variance = 0.0;

    // 身長体重の入力
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "人目の身長：";
        cin >> height[i];
        cout << i + 1 << "人目の体重：";
        cin >> weight[i];
    }

    // 最大値の計算
    height_max = 0.0;
    weight_max = 0.0;
    for (int i = 0; i < 5; i++) {
        if (height[i] > height_max) {
            height_max = height[i];
        }
        if (weight[i] > weight_max) {
            weight_max = weight[i];
        }
    }

    // 平均値の計算
    height_ave = 0.0;
    weight_ave = 0.0;
    for (int i = 0; i < 5; i++) {
        height_ave += height[i];
        weight_ave += weight[i];
    }
    height_ave /= 5.0;
    weight_ave /= 5.0;

    // 分散の計算
    height_variance = 0.0;
    weight_variance = 0.0;
    for (int i = 0; i < 5; i++) {
        height_variance += (height[i] - height_ave) * (height[i] - height_ave);
        weight_variance += (weight[i] - weight_ave) * (weight[i] - weight_ave);
    }
    height_variance /= 5.0;
    weight_variance /= 5.0;

    // 計算結果の表示
    cout << "身長の最大値：" << height_max << endl;
    cout << "身長の平均値：" << height_ave << endl;
    cout << "身長の分散：" << height_variance << endl;
    cout << "体重の最大値：" << weight_max << endl;
    cout << "体重の平均値：" << weight_ave << endl;
    cout << "体重の分散：" << weight_variance << endl;

    return 0;
}