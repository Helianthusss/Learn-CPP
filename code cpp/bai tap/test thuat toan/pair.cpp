#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}
int main(){
    faster()
    int n,k;
    int a[n];
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    qsort(a,n,sizeof(int),compare);
    int ans=0;
    for(int i=0;i<n;i++){
        int key=a[i]+k;
        if(((int*)bsearch(&key,a+i+1,n-i-1,sizeof(int),compare))!=NULL)
        ans++;
    } 
    cout<< ans << endl;
    return 0;
}