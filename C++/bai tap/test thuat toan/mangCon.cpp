#include <bits/stdc++.h>
using namespace std;

int main(){   
    int n, A[1000];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        A[a]++;
    }
    int ans=0;
    for(int i=1; i<1000; i++){
        ans=max(ans, A[i-1]+A[i]);
    }
    cout << ans;
    return 0;
}