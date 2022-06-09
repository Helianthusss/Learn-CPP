#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
vector <pair<int,int> > v;
int n;
int cmp(pair <int,int> a,pair <int,int> b){
	if(a.first<b.first) return 1;
	if(a.first==b.first&&a.second<b.second) return 1;
	return 0;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	cin>>n;
	for(int i=0,a,b;i<n;i++){
		cin>>a>>b;
		v.pb({a,b});
	}
	sort(v.begin(),v.end(),cmp);
	int res=1,pos=0;
	for(int i=1;i<n;i++){
		if(v[i].first>=v[pos].second){
			res++;
			pos=i;
		}
		else if(v[i].second<v[pos].second) pos=i;
	}
	cout<<res;
}