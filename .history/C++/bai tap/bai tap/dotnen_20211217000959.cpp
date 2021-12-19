#include<iostream>
using namespace std;

int main(){
    int candles,makeNew;
    cin>>candles>>makeNew;
    if(candles < makeNew) cout<<candles;
    else if(candles = makeNew) cout<<candles+1;
    else {
        int hieu=candles-makeNew;
        while(hieu = 0){
            hieu=candles-makeNew;
            hieu=hieu+makeNew;
        }

    }
}