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
 
using namespace std;
 
int main(){
    faster
	int n,t=0,f[10001],d[10001];
	cin>>n;
	int a[n+1];
    FOR(i,1,n){
	    cin>>a[i];
        t=t+a[i];
	}
	t=t/2;
//QHD
	FOR(i,1,t){
		f[i]=INT_MAX;
        FOR(j,1,n){
        if (i>=a[j] && j>f[i-a[j]]) {
	        f[i]=j; break;}
        }
    }
//Truyvet
    int count=0;
	while (f[t] > n) t--;
	while (t > 0){
		d[f[t]]=1;
		t=t-a[f[t]];
        count++;
	}
    cout<<count<<" "<<t;
	cout<<endl;
	FOR(i,1,n) {if (d[i]==1) cout<<a[i]<<" ";}
	cout<<endl;
}