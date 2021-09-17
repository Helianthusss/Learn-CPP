#include<iostream>
using namespace std;

int main(){
    int n;
    do{
        cin>>n;
        if(n> 7 || n <1) cout<< "Nhap lai!!!\n";
    }while(n> 7 || n <1);
    switch(n){
        case 1: 
            cout << "Chu nhat";
            break;
        case 2: 
            cout << "Thu hai";
            break;
        case 3: 
            cout << "Thu ba";
            break;
        case 4: 
            cout << "Thu tu";
            break;
        case 5: 
            cout << "Thu nam";
            break;
        case 6: 
            cout << "Thu sau";
            break;
        case 7: 
            cout << "Thu bay";
            break;     
    }
    return 0;
}