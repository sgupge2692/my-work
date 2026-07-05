#include<iostream> 
using namespace std; 
int main(){ 
    int N, k, Ans = 0; 
    cin >> N; 
    cin >> k; 
    int ans1=1,ans2=1;
    for(int i = N;i>N-k;i--){
        ans1 *=i;
    }
    for(int i=k;i>0;i--){
        ans2 +=i;
    }
    Ans = ans1/ans2;
    cout << N <<"枚の中から" << k <<"枚を選ぶ組合せは" << Ans <<"通りです" << endl; 
    return 0;
}


/*別解
#include<iostream> 
using namespace std; 
int main(){ 
int N, k, Ans; 
cin >> N; 
cin >> k; 
int i; 
Ans = 1; 
//分子の計算 
for (i = 0; i < k; i++){ 
Ans *= (N - i);
 } 
//分母の計算 
for (i = 0; i < k; i++){ 
Ans /= (k - i); 
} 
cout << N << "枚の中から" << k << "枚を選ぶ組合せは" << Ans << "通りです" << endl; 
return 0;
}

中山功一. 続けるC++プログラミング 中級者を目指す人にささげる問題集＆解答解説集: 実技試験×10年分 (pp. 433-434). (Function). Kindle Edition. */