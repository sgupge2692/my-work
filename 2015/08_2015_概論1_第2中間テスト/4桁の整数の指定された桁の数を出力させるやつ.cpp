#include <iostream> 
using namespace std; 

int function(int data,int place){
    if(place==1){
        return data%10;
    }else if(place==2){
        return (data/10)%10;
    }else if(place==3){
        return (data/100)%10;
    }else{
        return data/1000;
    }
}

int main(){ 
    int data, place;  
    cin >> data; 
    cin >> place; 
    // 
    
    cout << function(data, place); 
    
    return 0;
}