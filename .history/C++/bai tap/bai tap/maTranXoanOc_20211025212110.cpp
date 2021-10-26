#include<iostream>

using namespace std;

int main() {
	int m;
	cin >> m ;
	int a[m][m];
	int dong = m, cot = m, k = 1, p = 0, i, j;
	while(k <= m*m){
		for(i = p; i < cot; i++) 
			a[p][i] = k++;
		for(i = p+1; i < dong; i++) 
			a[i][cot-1] = k++;
		if ( p != dong-1){
			for(i = cot-2; i >=p; i--) 
				a[dong-1][i] = k++;
		}	
		if(p!=cot-1){
			for(i = dong-2; i > p; i--) 
				a[i][p] = k++;
		}	
		p++;dong --; cot --;
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}