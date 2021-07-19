#include<iostream>
#include<math.h>
using namespace std;
int chuyenDoi(long long x, int k1, int k2 ){
	int sd,dem=0;
	int s = 0;
	while(x > 0){
		sd = x%10;
		if(sd == k1){
			sd = k2;
		}	
		x = x/10;
		s = s+pow(10,dem)*sd;
		dem++;
		
	}
	return s;
}
int main(){
	int n;
	long long X1,X2;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>X1>>X2;
    }
    cout<<chuyenDoi(X1,6,5)+chuyenDoi(X2,6,5)<<" "<< chuyenDoi(X1,5,6)+chuyenDoi(X2,5,6);
    return 0;
}