// https://codeforces.com/gym/102951/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	vector<int> x(N), y(N);
	for (int& t: x) cin >> t;
	for (int& t: y) cin >> t;
	int max_square = 0;
	for (int i = 0; i < N; i++) { 
		for (int j = i+1; j < N; j++) { 
			int dx = x[i]-x[j], dy = y[i]-y[j];
			int square = dx*dx+dy*dy;
			max_square = max(max_square,square);
		}
	}
	cout << max_square;
}