#include<iostream>
#include<math.h>
using namespace std;

int prime(int num) {
	int flag = 1;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			flag = 0;
		}
	}
	if (num <= 1) {
		flag = 0;
	}
	return flag;
}

int Gaussian(int a, int b) {
    int distance = a*a+b*b;
	if (a == 0 && prime(abs(b)) == 1 && abs(b) % 4 == 3) {
		return 1;
	}
	if (b == 0 && prime(abs(a)) == 1 && abs(a) % 4 == 3) {
		return 1;
	}
	return(prime(a * a + b * b));
}

int main() {
	int data[41][41] = {};
	for (int a = -20; a <= 20; a++) {
		for (int b = -20; b <= 20; b++) {
		    if(a*a+b*b<=255)
			data[a + 20][b + 20] = Gaussian(a, b);
		}
	}
	for (int a = 0; a < 41; a++) {
		for (int b = 0; b < 41; b++) {
			if (data[a][b] == 0) {
				cout << "  ";
			}
			else {
				cout << "88";
			}
		}
		cout << endl;
	}
}