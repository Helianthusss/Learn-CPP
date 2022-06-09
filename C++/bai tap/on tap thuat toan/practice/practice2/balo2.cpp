#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll LINF = 1e18 + 1e9 + 1;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> weight(n + 1), value(n + 1);
    FOR(i,1,n) cin >> weight[i] >> value[i];
    int sum = 0;
    for (int &x : value) sum += x;

    vector<vector<ll> > f(2, vector<ll>(sum + 1, +LINF));
    f[0][0] = 0;
    FOR(i,1,n){
        bool cur = i % 2;
        bool pre = (i + 1) % 2; 
        f[cur][0] = 0;
        FOR(j,1,sum){
            if (j >= value[i])
                f[cur][j] = min(f[pre][j], f[pre][j - value[i]] + weight[i]);
            else 
                f[cur][j] = f[pre][j];
        }
    }

    for (int v = sum; v-->0; ){
        if (f[n % 2][v] <= k) {
            cout << v;
            return 0;
        }
    }            
}
