#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int H, W, N, cmd;
    int A[20][20];
    int y = 0, x = 0, total_resource = 0;
    bool is_boost = false;

    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) cin >> A[i][j];
    }

    // 初期位置の処理
    total_resource += A[y][x];
    if (is_prime(A[y][x])) is_boost = true;
    else if (A[y][x] == 0 || A[y][x] % 2 == 0) is_boost = false;
    A[y][x] = 0;

    // 方向定義 (0:ダミー, 1:上, 2:下, 3:左, 4:右)
    int dy[] = {0, -1, 1, 0, 0};
    int dx[] = {0, 0, 0, -1, 1};

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;

        int d = is_boost ? 2 : 1;
        int ny = y + dy[cmd] * d;
        int nx = x + dx[cmd] * d;

        // ブーストモードで2マス先がマップ外なら1マス先を試す
        if (is_boost && (ny < 0 || ny >= H || nx < 0 || nx >= W)) {
            ny = y + dy[cmd];
            nx = x + dx[cmd];
        }

        // 移動判定（マップ内かつ1マス先も範囲内なら移動）
        if (ny >= 0 && ny < H && nx >= 0 && nx < W) {
            y = ny;
            x = nx;

            int val = A[y][x];
            total_resource += val;

            // モード切り替えロジック
            if (is_prime(val)) {
                is_boost = true;
            } else if (val == 0 || val % 2 == 0) {
                is_boost = false;
            }
            // それ以外の場合は維持（何もしない）

            A[y][x] = 0;
        }
    }

    cout << y << " " << x << " " << total_resource << endl;
    return 0;
}