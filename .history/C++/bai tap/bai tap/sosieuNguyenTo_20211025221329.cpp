#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n<2){
		return false;
	}
	int squareRoot= sqrt(n);
	for(int i=2;i<=squareRoot;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
std::vector<int> soSieuNguyenTo(int n){
    queue<int> q;
    vector<int> res;
    for (int i = 2; i < 10; i++) if (prime(i)) q.push(i);
    while (!q.empty()){
        for (int i = 1; i <= 9; i += 2){
            int k = q.front()*10 + i;
            if (prime(k) && k <= n) q.push(k);
        }
        res.push_back(q.front());
        q.pop();
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    for(auto i : soSieuNguyenTo(n))	cout<<i<<" ";
    cout<<endl;
}