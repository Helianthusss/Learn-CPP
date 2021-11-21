#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> v;
    vector<int>::iterator max,min;
    cout<<"Nhap so luong phan tu: ";cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    n=v.size();
    cout<<"\nXuat mang: ";
    for(vector<int>::iterator it =v.begin(); it!= v.end(); it++) cout <<*it<<" ";
    cout<<"\nTong cac phan tu trong mang: ";
    int sum=0;
    for(vector<int>::iterator it =v.begin(); it!= v.end(); it++){
        sum =sum+ *it;
    }
    cout<<sum;
    int max1= *max_element(v.begin(),v.end());
    int min1 = *min_element(v.begin(),v.end());
    max=lower_bound(v.begin(),v.end(),max1);
    cout<<"\nPhan tu lon nhat trong mang: "<<*max;
    min=lower_bound(v.begin(),v.end(),min1);
    cout<<"\nPhan tu nho nhat trong mang: "<<*min;
    return 0;

}