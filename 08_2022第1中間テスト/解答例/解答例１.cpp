#include <iostream>
using namespace std;

int main() {
	double point[3];
	double record;
	cin >> point[0] >> point[1] >> point[2];

		/*回答部分*/
	record = point[0]+point[1]+point[2];

	double min=point[0];
	if(min>point[1]){
		min = point[1];
	}
	if(min>point[2]){
		min = point[2];
	}
	record = (record - min)/2.0;
	cout << record;
}