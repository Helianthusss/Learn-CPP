#include<bits/stdc++.h>
using namespace std;

int main(){
    int candles,makeNew,ans=0;
    cin>>candles>>makeNew;
    if(candles > makeNew) {
        while(candles/makeNew>0){
            int thuong=candles/makeNew;
            ans=ans+thuong;
            candles=thuong;
        }
        cout<<candles+ans;
    }
    else if(candles = makeNew) cout<<candles+1;
    else cout<<candles;
    return 0;
}