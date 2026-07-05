#include<iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 20;

struct Student {
    string gender;
    string surname;
    string name;
    int id = 0;
};

bool isPrime(int num) {
    //素数判定関数
    /***************** 回答部分その１ここから *****************/
     if (num<2) {
         return false;
     }
     for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
     }
     return true;
    /***************** 回答部分その１ここまで *****************/
}

void loadStudents(Student students[], int& count) {
    ifstream file("student.txt");
    if (!file) {
        cout << "Cannot open file" << endl;
        exit(0);
    }
    count = 0;
    while (file >> students[count].gender >> students[count].surname >> students[count].name >> students[count].id) {
        count++;
    }
    file.close();
}

void printStudent(const Student& student) {
    cout << student.gender << " " << student.surname << " " << student.name << " " << student.id << endl;
}

void filterByGender(Student students[], int count, int gender) {
    //いずれかの性別の学生のみ表示(printStudent)
    /***************** 回答部分その２ここから *****************/
    for(int i=0;i<count;i++){
        if(students[i].gender=="男"&&gender==0||students[i].gender=="女"&&gender==1){    
            printStudent(students[i]);
        }
    }

    /***************** 回答部分その２ここまで *****************/
}

void filterByIDPrime(Student students[], int count, int prime) {
    //下3桁が素数かどうかに応じて表示(printStudent)
    /***************** 回答部分その３ここから *****************/
    for(int i=0;i<count;i++){
        if((prime==0&&isPrime(students[i].id%1000)==true)||(prime==1&&isPrime(students[i].id%1000)==false)){
            printStudent(students[i]);
        }
    }
}    
    /***************** 回答部分その３ここまで *****************/

int main() {
    Student students[MAX_STUDENTS];
    int count;
    loadStudents(students, count);
    int category;
    cout << "カテゴリを選択（1:性別，2:学籍番号）: ";
    cin >> category;
    if (category == 1) {
        int gender;
        cout << "性別を選択（0:男，1:女）: ";
        cin >> gender;
        if (gender == 0 || gender == 1) {
            filterByGender(students, count, gender);
        } else {
            cout << "入力違反" << endl;
        }
    } else if (category == 2) {
        int prime;
        cout << "学籍番号の条件を選択（0:下3ケタが素数, 1:素数でない）: ";
        cin >> prime;
        if (prime == 0 || prime == 1) {
            filterByIDPrime(students, count, prime);
        } else {
            cout << "入力違反" << endl;
        }
    } else {
        cout << "入力違反" << endl;
    }
    return 0;   //終了前に表示画面を止めたい場合は，この行にブレークポイント
}