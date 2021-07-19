#include<bits/stdc++.h>
#include <algorithm>
#define ll long long
#define pub push_back
#define run() ll T; cin>>T; cin.ignore(); while(T--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    faster();
    vector<ll> arr;
    run(){
        ll n;
        cin>>n;
        arr.pub(n);
    }
    int temp=0;
    for(int i=0; i<arr.size()-1;i++){
        for(int j=i+1; j<arr.size();j++){
            ll a = (lcm(arr[i],arr[j]))/(__gcd(arr[i],arr[j]));
            if(sqrt(a)==(ll)(sqrt(a))) temp++;
        }
    }
    cout<<temp<<endl;
}