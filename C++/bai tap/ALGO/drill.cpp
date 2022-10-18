#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
const ll INFL= 1e18 +123;

int main(){
    // ifstream in("input.txt");
    // ofstream out("output.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int &i : a) cin>>i;
    ll best = INFL;
    for (int i= -1; i<=1;i+=2){
        vector<int> tmp = a;
        for(int j =0;j<n;j+=2) tmp[i] +=k*i;
        ll sum =0;
        nth_element(tmp.begin(), tmp.begin() +tmp.size()/2, tmp.end());
        int val =tmp[tmp.size() /2];
        for (int num : tmp) sum+=abs((ll) num-val);
        if(sum <best) best = sum;
    }
    cout<<best <<"\n";
}