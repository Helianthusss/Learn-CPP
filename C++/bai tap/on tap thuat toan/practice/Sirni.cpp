/* Problem
https://oj.vnoi.info/problem/coci1617_r6_sirni
*/
#include <bits/stdc++.h>

using namespace std;

int const N = 1e7 + 11;
int a[N], n,ans,Min=0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    //sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; ++i){ 
        int Pa=a[i];
        int Pb=a[i+1];
        int Mins=min(Pa%Pb,Pb%Pa);
        if(Mins <Min) Min=Mins;
        else  Min =0;
    }
    Min=ans;
    cout << ans;
    return 0;
}