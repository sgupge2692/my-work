//もう一回
#include <iostream>
using namespace std;

int main() {
    int dryTimes[10];
    int washCount=0;
    for (int i = 0; i < 10; i++) {
        cin >> dryTimes[i];
    }

    /*** ここに回答を記入 ***/

    int tmp=0;
    int current=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(dryTimes[i]>dryTimes[j]){
                tmp=dryTimes[i];
                dryTimes[i]=dryTimes[j];
                dryTimes[j]=tmp;
            }
        }
    }
    while(current<10){
        washCount++;
        int baseTime = dryTimes[current];
        while(dryTimes[current]-baseTime<20&&current<10){
            current++;

        }

    }
    


    cout << washCount << endl;

    return 0;
}