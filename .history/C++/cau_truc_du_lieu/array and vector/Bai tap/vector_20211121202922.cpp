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
    for(vector<int>::iterator it =v.begin(); it!= v.end(); it++) cout <<*it<<" ";
    cout<<"tong cac phan tu trong mang: ";
    int sum=0;
    for(vector<int>::iterator it =v.begin(); it!= v.end(); it++){
        sum =sum+ *it;
    }
    cout<<sum;
    return 0;

}