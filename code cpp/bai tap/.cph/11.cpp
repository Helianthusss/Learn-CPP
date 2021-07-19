#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,sum=0;
	cout<<"\n Nhap n: ";
	cin>>n;
	int i=1;
	while(i<=n){
		if(i == 2 || i == 4){
			continue;
		}
		sum = sum+i;
		i++;
	}
	cout << sum;
	return 0;
}