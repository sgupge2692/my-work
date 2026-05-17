//もう一回
#include <iostream>
#include <math.h>
using namespace std;
// xの平方根はsqrt(x)を使用すること

int main() {
	int score, point;
	cin >> point;

	for (int i = 0; i <= 3000; i++) {
		if (point <= sqrt(i) * 2.0 + i / 20.0) {
			score = i;
			break;
		}
	}
	cout << score;
}