#include <iostream>
using namespace std;

int main() {
	double data[5];
	for (int i = 0; i < 5; i++) {
		cin >> data[i];
	}

	/*回答部分*/
    double tmp;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(data[i]>data[j]){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
	for (int i = 0; i < 5; i++) {
		cout << data[i] << endl;
	}
}