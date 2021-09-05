//https://www.hackerrank.com/challenges/gena/problem

#include <bits/stdc++.h>
using namespace std;


int memo[1<<20];

int main(){
	memset(memo,-1,sizeof(memo));
	int n;
	cin >> n;
	int s = 0;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		x--;
		s |= x<<(2*i);
	}
	queue<int> Q;
	Q.push(s);
	memo[s] = 0;
	while( Q.size() ){
		int q = Q.front(); Q.pop();
		if( q == 0 ){
			cout << memo[q] << endl;
			return 0;
		}
		//cout << q[0] << " " << q[1] << " " << q[2] << endl;
		int tp[4] = {1000,1000,1000,1000};
		for(int i = n-1 ; i >= 0 ; i--)
			tp[q>>(2*i)&3] = i;
		for(int i = 0 ; i < 4 ; i++){
			for(int j = 0 ; j < 4 ; j++){
				if( i != j and tp[i] < tp[j] ){
					int ne = q;
					ne &= ~(3 << (2*tp[i]));
					ne |= (j << (2*tp[i]));
					if( memo[ne] == -1){
						memo[ne] = memo[q] + 1;
						Q.push(ne);
					}
				}
			}
		}
	}
}