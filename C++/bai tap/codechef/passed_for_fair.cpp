#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if(n == k+1 || n < k) {cout<<"YES"<<endl;}
	    else cout<<"NO"<<endl;
	}
	return 0;
}
