// Trần Đức Anh MSSV: 6151071034 
#include <iostream>
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
        bool operator >(PS other);
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
bool PS::operator >(PS other){
    return ((float)(this->tu)/this->mau > other.tu/other.mau);
}
void nhap(PS a[], int n){
    for(int i=0; i<n;i++){
        cout<<"Nhap phan so thu "<<i+1<<": "<<endl;
        cin>>a[i];
    }
}
void in(PS a[], int n){
    for(int i=0; i<n;i++){
        cout<<"PS "<<i<<": ";
        cout<<a[i];
    }
}
void sort(PS a[], int n){
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                swap(a[j], a[i]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Nhap so luong phan tu: ";  cin>>n;
    PS a[n];
    nhap(a,n);
    in(a, n);
    sort(a, n);
    cout<<"Mang sau sap xep:"<<endl;
    in(a, n);
}