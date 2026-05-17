#include <iostream>
using namespace std;

int main() {
	double data[5][6] = {
			{0, 13, 19, 5, 7, 19},
			{16, 15, 3, 15, 20, 18},
			{1, 3, 14, 17, 11, 15},
			{13, 16, 19, 5, 18, 16},
			{19, 13, 10, 5, 10, 18}};
	int a, b, n;
	double answer = 0.0;
	cin >> a >> b >> n;

	/*回答部分*/
	double ave = 0.0,mid=0.0;
	if(a==1){
		if(b==1){//横の平均
				for(int i=0;i<6;i++){
					ave += data[n][i];
				}
				ave = ave /6.0;
		}else{//縦
				for(int i=0;i<5;i++){
					ave += data[i][n];
				}
				ave = ave /5.0;
		}
	}else{
		double tmp = 0.0;
		if(b==1){//横の中央値
			for(int i=0;i<6;i++){
				for(int j=i+1;j<6;j++){
					if(data[n][i] > data[n][j]){
						tmp = data[n][i];
						data[n][i]=data[n][j];
						data[n][j]=tmp;
					}
				}
			}
			mid = (data[n][2]+data[n][3])/2.0;
		}else{
			for(int i=0;i<5;i++){
				for(int j=i+1;j<5;j++){
					if(data[i][n]>data[j][n]){
						tmp = data[i][n];
						data[i][n]=data[j][n];
						data[j][n]=tmp;
					}
				}
			}
			mid = data[2][n];
		}
	}
	cout << answer;
}