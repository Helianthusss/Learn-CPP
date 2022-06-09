#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    int a[n],b[n],c[n],l[n];
    int sum=0;
    for(int i=1; i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=1; i<=n; i++){
        l[i] = c[i];
        for(int j=1;j=i-1;j++){
            if(b[j]<=a[i] && l[i]< l[j]+c[i]) l[i]=l[j]+c[i];
        }
    }
    for(int i=1; i<=n; i++){
        sum+=l[i];
    }
    cout<<sum<<endl;
}
//TODO chua hoan thanh