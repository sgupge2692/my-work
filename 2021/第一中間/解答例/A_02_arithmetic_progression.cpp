/*********************************************************
プログラミング概論Ｘ（第Ｘ中間試験）：問X
　　　学籍番号：XX23XXXX 氏名　XXXXXX
   　　提出日：20XX年 X月 X日
**********************************************************/

#include<iostream>
using namespace std;

void main() {
	int a, d, n, s, value = 0;
	cout << "初項aは？" << endl;
	cin >> a;
	cout << "交差dは？" << endl;
	cin >> d;
	cout << "表示を開始する項番号n（第n項）は？" << endl;
	cin >> n;
	cout << "表示する項数sは？" << endl;
	cin >> s;

	cout << endl << "表示する等差数列：" << endl;
	for (int i = 1; i < n + s; i++) {
		if (i == 1) {
			value = a;
		}
		else {
			value += d;
		}
		if (i >= n) {
			cout << value << endl;
		}
	}
}

