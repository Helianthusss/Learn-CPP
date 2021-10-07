#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do{
        cin>>n;
    } while(n>200); 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        cout<<"Step "<<i+1<<": ";
        for(int k = 0; k<n; k++){
           cout<<arr[k]<<" "; 
        } 
        cout<<endl;
    }
    return 0;
}