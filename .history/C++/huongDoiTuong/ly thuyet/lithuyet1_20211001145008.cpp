#include<iostream>
using namespace std;

class PhanSo{
    private:
        int tu;
        int mau;
    public:
    friend istream& operator >>(istream &is, PhanSo &ps);
    friend ostream& operator <<(ostream& os, PhanSo &ps);
    PhanSo operator +(PhanSo ps);
    int operator > (PhanSo ps);
};
istream& operator<<(istream &is, PhanSo &ps){
    cout<<"\n Nhap tu: ";
    is>>ps.tu;
    cout<<"\nNhap mau: ";
    is>>ps.mau;
    return is;
}
ostream& operator<<(ostream& os, PhanSo &ps){
    os<<"\nPhan so la: "<<ps.tu<<"/"<<ps.mau<<endl;
    return os;
}
PhanSo PhanSo::operator+(PhanSo ps){
    PhanSo t;
    t.tu=tu*ps.mau+mau*ps.tu;
    t.mau=mau*ps.mau;
    return t;
}
/*int PhanSo::operator >(PhanSo ps){
    if()
}*/
int main(){
    PhanSo a,b,c;
    cout<<"\nNhap phan so a: ";
    cin>>a;
    cout<<"\nNhap phan so b: ";
    cin>>b;
    cout <<a<<" "<<b<<endl;
    c=a+b;
    cout<< c;
 
}