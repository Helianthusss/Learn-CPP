#include<bits/stdc++.h>
using namespace std;

int main(){
    int candles,makeNew;
    cin>>candles>>makeNew;
    if(candles < makeNew) cout<<candles;
    //else if(candles = makeNew) cout<<candles+1;
    else {
        float hieu=(float)candles/makeNew;
        int ans=round(hieu);
        cout<<pow(ans,2);
    }
    return 0;
}