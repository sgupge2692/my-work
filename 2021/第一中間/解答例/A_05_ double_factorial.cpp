/*********************************************************
プログラミング概論Ｘ（第Ｘ中間試験）：問X
　　　学籍番号：XX23XXXX 氏名　XXXXXX
   　　提出日：20XX年 X月 X日
**********************************************************/

#include<iostream>
using namespace std;

int d_kaijo(int n) {
	if (n <= 1) {
		return 1;
	}else{
		return n * d_kaijo(n - 2);
	}
}

void main() {
	int  n;
	cin >> n;
	cout << d_kaijo(n);
}