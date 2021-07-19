#include<iostream> 
#include<math.h>
using namespace std;
int main(){
    int n,a,b,x,y;
	int arr[100];
	do{
	cin>>n;
    }while(n<0);
	for(int i=0;i<n;i++){
		cin>>b;
		arr[i]=abs(b);
	}
	// sap xep tang dan cac phan tu
	for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++)	{
	   	    if(arr[i]<arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
		    }
	    }
	}
    //loai cac phan tu giong nhau
    for(int j=0;j<n;j++){
	    for(int i=0;i<n;i++){
			if(arr[i]==arr[i+1]){
				x=i+1;
				for(x;x<n;x++){
					arr[x]=arr[x+1];
				}
				n--;
			}
		}
    }
	// neu phan tu be nhat khong phai la 1 thi in 1 ra man hinh
	if(arr[0]!=1){
		cout<<1;
	}
	if(arr[0]==1){
    // neu hai phan tu lien tiep khong phai la hai so tu nhien lien tiep thi in ra so tiep theo cua phan tu dau
		for(int i=0;i<n;i++){
			if(arr[i]+1!=arr[i+1]){
				cout<<arr[i]+1;				
				break;
			}
		}
	}
	return 0;
}
