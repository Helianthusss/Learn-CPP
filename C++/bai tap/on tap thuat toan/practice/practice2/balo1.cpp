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

int knapSack(int W, int wt[], int val[], int n){
    int i, w;
    vector<vector<int>> K(n + 1, vector<int>(W + 1));
    FOR(i,1,n){
        FOR(w,1,W){
            if (i == 0 || w == 0) K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + 
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}

int main(){
    faster
    int n,W; cin>>n>>W;

    int val[n],wt[n];
    FOR(i,1,n) cin>>val[i];
    FOR(i,1,n) cin>>wt[i];
    int m = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, m);
    return 0;
}