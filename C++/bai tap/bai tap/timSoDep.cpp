#include<bits/stdc++.h>
using namespace std;

bool nto(int x){
	if(x < 2) 
	    return false;
	for(int i = 2; i <= sqrt(x); i++){
        if(x%i==0)
	        return false;
	}    
	return true;
}

bool ktra(int x){
	int tong = 0;
	bool coso = true;
	while(x > 0){
		int t = x % 10;
		if(t != 2 && t != 3 && t != 5 && t != 7)
		    coso = false;
		tong = tong + t;
		x = x / 10;
	}
	if(nto(tong) && coso == true)
	    return true;
	return false;
}

int main(){
	int n,m,dem=0;
    cin >> n >> m;  
    if(nto(n) && ktra(n)) dem ++;
	if(nto(m) && ktra(m)) dem ++;
	cout<<dem;
}
