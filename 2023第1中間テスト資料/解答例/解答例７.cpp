#include <iostream>
#include <string>
using namespace std;

int euclid(int x, int y) {
    /*ここに回答を記入*/
    if(y==0){
        return x;
    }else{
        return euclid(y,x%y);
    }
}


int main() {
	int a, b;
    int ans;
	cin >> a >> b;
	ans = euclid(a, b);
	cout << ans << endl;
}
