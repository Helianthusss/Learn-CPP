#include<iostream>
using namespace std;
int logarit(int n){
    int dem=0;
    while(n>=10){
        n/=10; 
        dem++;
    }
    return dem;
}
int main(){
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
		int kq = logarit(i) +1;
		s +=kq;
	}
    cout << s;
}