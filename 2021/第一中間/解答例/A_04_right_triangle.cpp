/*********************************************************
プログラミング概論Ｘ（第Ｘ中間試験）：問X
　　　学籍番号：XX23XXXX 氏名　XXXXXX
   　　提出日：20XX年 X月 X日
**********************************************************/

#include<iostream>
using namespace std;

void main() {
	double a, b, c;
	int flag = 0;
	
	cout << "3辺の長さは？" << endl;
	cin >> a >> b >> c;

	if (a * a == b * b + c * c) {
		flag = 1;
	}
	if (b * b == a * a + c * c) {
		flag = 1;
	}
	if (c * c == a * a + b * b) {
		flag = 1;
	}
	if (flag == 1) {
		cout << "直角三角形です" << endl;
	}else {
		cout << "直角三角形ではありません" << endl;
	}
}
