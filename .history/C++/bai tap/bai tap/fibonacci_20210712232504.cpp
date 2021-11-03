#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int fibonacci(int n);
int main(int argc, char** argv) {
	int n;
    cout<<"\nNhap so luong phan tu cua day:";
    cin>>n;
	cout<<"\nDay fibonacci la:";
	for(int i=0;i<n;i++){
		cout<<fibonacci(i)<<" ";
	}
	return 0;
}
int fibonacci(int n){
	//day fibonacci la day ma so dau tien bang 0 so tiep theo bang tong 2 so lien truoc no
	int f0=0; 
	int f1=1;
	int fn=1;
	if(n<0){
	    return -1;
	}else if (n==0 || n==1){
		return n;
	}else{
		for(int i=2;i<n;i++){
			f0=f1;
			f1=fn;
			fn=f0+f1;
		}
	}
	return fn;   	
}

