// Trần Đức Anh MSSV: 6151071034_CNTT K61
#include <stdio.h>

void nhapmang(int a[],int n){
	for(int i=0;i<n;++i)scanf("%d",&a[i]);
}
void taobang(int a[],int sum[],int l[],int n){
	if(a[0]%2==0){
		l[0] = 1;
		sum[0] = a[0];
	}
	for(int i=1;i<n;++i){
        if(a[i]%2==0){
            l[i] = l[i-1]+1;
            sum[i] = sum[i-1]+a[i];
        }
	}
}
void docbang(int a[],int sum[],int l[],int n){
	int max_index = 0;
	for(int i=1;i<n;++i){
		if(sum[i]>sum[max_index]) max_index = i;
	}
	for(int i=max_index-l[max_index]+1;i<=max_index;++i)printf("%d ",a[i]);
}
int check(int l[],int n){
	for(int i=0;i<n;++i)
	if(l[i]>=2)return 1;
	return 0;
}
int main(){
    ifstream in("OLP2021_05.INP");
    ofstream out("OLP2021_05.OUT");
	int n;
	scanf("%d",&n);
	int a[n];
	nhapmang(a,n);
	int sum[n];
	int l[n];
	for(int i=0;i<n;++i)
	{
		sum[i] = 0;
		l[i] = 0;
	} 
	taobang(a,sum,l,n);
	if(check(l,n)==0)
	{
		printf("-1");
		return 0;
	}
	docbang(a,sum,l,n);
}