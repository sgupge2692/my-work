/*曜日を出力するプログラム*/
#include <iostream>
using namespace std;
 int main(){ 
    int day; 
    cin >> day;
    if(day%7==1){ 
    cout << "日曜日" <<endl; 
    }else if(day%7==2){
    cout << "月曜日" <<endl; 
    }else if(day%7==3){
    cout << "火曜日" <<endl; 
    }else if(day%7==4){
    cout << "水曜日" <<endl;
    }else if(day%7==5){ 
    cout << "木曜日" <<endl;
    }else if(day%7==6){ 
    cout << "金曜日" <<endl;
    }else{ 
    cout << "土曜日" <<endl; 
    }
    return 0;
}

/*別解
#include<iostream> 
using namespace std; 
int main(){ 
int day; 
cin >> day; 
day = day % 7; 
switch (day){ 
case 1: 
cout << "日曜日" << endl; 
break; 
case 2: 
cout << "月曜日" << endl; 
break; 
case 3: 
cout << "火曜日" << endl; 
break; 
case 4: 
cout << "水曜日" << endl; 
break; 
case 5:
cout << "木曜日" << endl; 
break; 
case 6: 
cout << "金曜日" << endl; 
break; 
case 0: 
cout << "土曜日" << endl; 
break; 
} 
}

*/