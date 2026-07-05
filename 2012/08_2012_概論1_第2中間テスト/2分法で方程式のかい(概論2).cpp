#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio> // printf, scanf用

#define EPS 1.0E-8 // 収束判定のための小さな値（イプシロン）

// プロトタイプ宣言：方程式 f(x) = 0 を解くための関数
double equation(double x, double C);

int main() {
    double a, b, fa, fb; // 区間の端点 a, b とその関数値 fa, fb
    double c, C, fc;     // 中点 c とその関数値 fc、および定数 C

    printf("定数Cを入力: ");
    scanf("%lf", &C);

    printf("解を求める範囲を入力 (a b): ");
    scanf("%lf%lf", &a, &b);

    // 1. 入力チェック：範囲が正しくない場合は終了
    if (a >= b) {
        printf("区間の値が正しくありません\n");
        return 0;
    }

    // 2. 初期値の計算
    fa = equation(a, C);
    fb = equation(b, C);

    // 3. 端点が解である場合の処理
    if (fa == 0) { printf("解の値＝%8.5f\n", a); return 0; }
    if (fb == 0) { printf("解の値＝%8.5f\n", b); return 0; }

    // 4. 解が存在するかの符号チェック
    if (fa * fb > 0) {
        printf("faとfbが同符号です（解が挟まれていません）\n");
        return 0;
    }

    // 5. 二分法による解の探索
    c = (a + b) / 2;
    fc = equation(c, C);

    // 範囲が十分小さくなるまで、またはfcが0になるまで繰り返す
    while ((b - a) > EPS && fc != 0) {
        // f(a)とf(c)が異符号なら、解は左半分(a,c)にある
        if (fa * fc < 0) {
            b = c;
            fb = fc;
        } 
        // そうでなければ解は右半分(c,b)にある
        else {
            a = c;
            fa = fc;
        }
        // 新しい区間の中点を計算
        c = (a + b) / 2;
        fc = equation(c, C);
    }

    // 6. 結果の表示
    printf("解の値＝%8.5f\n", c);

    return 0;
}

// 定義：方程式 f(x) = x^3 - 2x^2 - 5x + 6 - C
double equation(double x, double C) {
    return ((x * x * x) - (2 * x * x) - (5 * x) + 6 - C);
}