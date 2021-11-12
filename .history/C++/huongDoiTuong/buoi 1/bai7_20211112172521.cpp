#include <bits/stdc++.h>
using namespace std;
class PS{
    private:
        float tu;
        float mau;
    public:
        PS();
        ~PS();
        friend istream& operator>>(istream& is, PS& ps);
        friend ostream& operator<<(ostream& os, PS ps);
        friend bool operator >=(PS a, PS b);
};
PS::PS(){
    tu = 0;
    mau = 1;
}
PS::~PS(){}
istream& operator>>(istream& is, PS& ps){
    cout<<"Nhap tu so: ";
    is>>ps.tu;
    do{
    cout<<"Nhap mau so: ";
    is>>ps.mau;
    }while(ps.mau == 0);
    return is;
}
ostream& operator<<(ostream& os, PS ps){
    os<<ps.tu<< "/" <<ps.mau<<endl;
    return os;
}
bool operator >=(PS a, PS b){
    return ((float)(a.tu)/a.mau > b.tu/b.mau) || ((float)(a.tu)/a.mau == b.tu/b.mau);
}
void nhap(PS a[], int n){
    for(int i=0; i<n;i++){
        cout<<"Nhap phan so thu "<<i+1<<": "<<endl;
        cin>>a[i];
    }
}
void in(PS a[], int n){
    for(int i=0; i<n;i++){
        cout<<"Phan so "<<i<<": ";
        cout<<a[i];
    }
}
void max_min(PS a[], int n){
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i] >= a[j]){
                swap(a[j], a[i]);
            }
        }
    }
    cout<<"Phan so lon nhat: "<<a[5-1]<<endl;
    cout<<"Phan so be nhat: "<<a[0]<<endl;
}
int main(){
    PS a, b;
    cin>>a>>b;
    cout<<a<<b;
    if(a >= b){
        cout<<"Lon hon hoac bang"<<endl;
    }else cout<<"nho hon"<<endl;
    PS arr[5];
    nhap(arr, 5);
    in(arr, 5);
    max_min(arr, 5);
}