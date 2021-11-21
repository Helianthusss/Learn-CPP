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
    return 0;

}