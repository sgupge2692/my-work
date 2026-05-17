#include <iostream>
using namespace std;

double open_rate = 100.0;
double darkness_rate = 20.0;

//中継国
double relay(double doller, int num) {
	if (num == 0) {
		return(doller * 0.5 / open_rate + doller * 0.4 / darkness_rate);
	}
	else{
		return(doller * 0.5 / open_rate + relay(doller * 0.4, num - 1));
	}
}

int main() {
	double doller, gas;
	int num;
	cin >> doller >> num;
	gas = relay(doller, num-1);	//裏ルート（中継num国）
	cout << gas;
}