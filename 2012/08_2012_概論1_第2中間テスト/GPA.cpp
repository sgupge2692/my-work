#include <iostream>
#include <string>
using namespace std;

void getData(string &name, int &eigo, int &suugaku, int &kokugo) {
    cout << "学生氏名、英語、数学、国語の点数を入力してください" << endl;
    cin >> name >> eigo >> suugaku >> kokugo;
}

double calcGPA(int i, int j, int k) {
    double score1, score2, score3;

    // 英語の判定
    if (i >= 90) score1 = 4;
    else if (i >= 80) score1 = 3;
    else if (i >= 70) score1 = 2;
    else if (i >= 60) score1 = 1;
    else score1 = 0;

    // 数学の判定
    if (j >= 90) score2 = 4;
    else if (j >= 80) score2 = 3;
    else if (j >= 70) score2 = 2;
    else if (j >= 60) score2 = 1;
    else score2 = 0;

    // 国語の判定
    if (k >= 90) score3 = 4;
    else if (k >= 80) score3 = 3;
    else if (k >= 70) score3 = 2;
    else if (k >= 60) score3 = 1;
    else score3 = 0;

    return (score1 + score2 + score3) / 3.0;
}

void showResult(string name, double GPA) {
    cout << "氏名：" << name << " GPA:" << GPA << endl;
}

int main() {
    string name;
    int eigo, suugaku, kokugo;

    getData(name, eigo, suugaku, kokugo);
    
    cout << "学生氏名：" << name << " 英語：" << eigo << " 数学：" << suugaku << " 国語：" << kokugo << endl;
    
    showResult(name, calcGPA(eigo, suugaku, kokugo));
    
    return 0;
}