#include<bits/stdc++.h>
using namespace std;

int burnCandles(int &a, int &b){
    int k,s=0;
    int left=a;
    int z;
    while(z!=0){
        z=left/b;
        k=left%b;
        left=z+k;
        s+=z;
    }
    return a+s;
}
int main(){
    int candles,makeNew,ans=0;
    cin>>candles>>makeNew;
    int k,s=0;
    int left=candles;
    int z;
    while(z!=0){
        z=left/makeNew;
        k=left%makeNew;
        left=z+k;
        s+=z;
    }
    cout<<candles+s;
    return 0;
}