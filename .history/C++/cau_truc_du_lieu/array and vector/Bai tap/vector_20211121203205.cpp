#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> v;
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
    int max=v.begin();
    for(vector<int>::iterator it =v.begin() +1; it!= v.end(); it++){
        if(max < *it) max = *it;
    }
    cout<<"\nPhan tu lon nhat trong mang: "<<max;
    cout<<sum;

    return 0;

}