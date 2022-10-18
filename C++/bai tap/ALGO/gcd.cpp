#include<bits/stdc++.h>
using namespace std;
int n,p,k,q;
vector<int64_t> a;
int64_t ans =0,x;

void upd(int i, int64_t val){
    int u=p+i;
    a[u] = val;u>>=1;
    while(u>0){
        a[u]= __gcd(a[2*u],a[2*u+1]);
        u>>=1;
    }
}

int main(){
    // ifstream in("input.txt");
    // ofstream out("output.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=20;i>=0;--i)
        if((k>>i)&1){p=1<<i; break;}
    if((k&(-k)) != k) p<<=1;
    a.assign(4*k+5,0);
    for(int i=0;i<k;++i) cin>>a[p+i];
    for (int i=p-1;i>0;--i) a[i] = __gcd(a[2*i],a[2*i+1]);
    ans = a[1];
    for(int i=k;i<n;++i){
        cin>>x;
        upd(i%k,x);
        if(ans<a[1]) ans = a[1];
    }
    cout<<ans;
}