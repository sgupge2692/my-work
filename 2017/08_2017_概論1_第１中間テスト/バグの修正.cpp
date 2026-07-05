//バグの修正
#include <iostream> 
using namespace std; 
#define GU  0 
#define CHOKI 1 
#define PA  2 


int main(){ 
    int rps[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int count[3] = { 0, 0, 0 }; 
    int i = 0; 
    cout <<"手の表示方法" << endl << "GU : 0, CHOKI : 1, PA : 2" << endl << endl;
    cout << i + 1 <<"番目の人の手：";
    rps[i] = GU; 
    cout << rps[i] << endl;
    count[rps[i]]++; i++;
    
    cout << i + 1 <<"番目の人の手：";
    rps[i] = CHOKI;
    cout << rps[i] << endl;
    count[rps[i]]++; i++; 
    cout << i + 1 <<"番目の人の手："; 
    rps[i] = PA; 
    cout << rps[i] << endl; 
    count[rps[i]]++;
    i++; 
    cout << i + 1 <<"番目の人の手："; 
    rps[i] = GU; 
    cout << rps[i] << endl; 
    count[rps[i]]++; 
    i++; 
    cout << i + 1 <<"番目の人の手："; 
    rps[i] = CHOKI; 
    cout << rps[i] << endl; 
    count[rps[i]]++; 
    i++; 
    cout << i + 1 <<"番目の人の手：";
    rps[i] = PA; 
    cout << rps[i] << endl; 
    count[rps[i]]++; 
    i++; 
    cout << i + 1 <<"番目の人の手："; 
    rps[i] = GU; 
    cout << rps[i] << endl; 
    count[rps[i]]++; 
    i++; 
    cout << i + 1 <<"番目の人の手："; 
    rps[i] = CHOKI; 
    cout << rps[i] << endl; 
    count[rps[i]]++; 
    i++; 
    cout << i + 1 <<"番目の人の手：";
    rps[i] = PA; 
    cout << rps[i] << endl;
    count[rps[i]]++; 
    i++; 
    cout << i + 1 <<"番目の人の手：";
    rps[i] = GU; 
    cout << rps[i] << endl; 
    count[rps[i]]++; 
    cout << endl << "GU: " << count[0] << ", CHOKI: " << count[1] << ", PA: " << count[2] << endl; 
}
