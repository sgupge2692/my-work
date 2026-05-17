#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int score;
	double point;
	cin >> score;
	double root_score = sqrt(score); //スコアの平方根

	/*回答部分*/
	point = root_score*2+score/20.0;
	cout << point;
}