/* Problem
https://oj.vnoi.info/problem/cf_edu3c
*/
#include <bits/stdc++.h>

using namespace std;

int const N = 1e5 + 11;
int a[N], n, sum, ans;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }

    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; ++i){ 
        if(i <= n - sum % n)
            ans += abs(sum / n - a[i]);
        else
            ans += abs(a[i] - (sum / n + 1));
    }
    cout << ans / 2;
    return 0;
}