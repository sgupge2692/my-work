//もう一回やる
#include <iostream>
using namespace std;

int main() {
	int point, patarn = 0;
	cin >> point;

	/*回答部分*/
	if (point < 0 || point > 180) {
		patarn = 0;
	} else {
		int s[62];
		int n = 0;
		
		s[n++] = 0; // M
		for (int i = 1; i <= 20; i++) {
			s[n++] = i;     // S
			s[n++] = i * 2; // D
			s[n++] = i * 3; // T
		}
		s[n++] = 50; // B

		for (int i = 0; i < 62; i++) {
			for (int j = 0; j < 62; j++) {
				for (int k = 0; k < 62; k++) {
					if (s[i] + s[j] + s[k] == point) {
						patarn++;
					}
				}
			}
		}
	}


	cout << patarn;
}