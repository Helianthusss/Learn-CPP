#include<bits/stdc++.h>
using namespace std;

int giaiThua (int n){
	if(n<=1)
	   return 1;
	return (n+giaiThua(n-1)/10)/10;//đệ qui
}
int main(){
    int n;
    int sum=0;
    cin>>n;
   // for(int i=1;i<n;i++){
     //   sum =sum+pow(10,i);
    sum =1 +giaiThua(n);
    cout <<sum;
}
