/*********************************************************
プログラミング概論Ｘ（第Ｘ中間試験）：問X
　　　学籍番号：XX238XXX 氏名　XXXXXX
   　　提出日：20XX年 X月 X日
**********************************************************/

#include<iostream>
using namespace std;

int main() {
	char Array[4][4] = { {'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'} };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << Array[(i+3)%4][3-j];
		}
		cout << endl;
	}
	return 0;
}
