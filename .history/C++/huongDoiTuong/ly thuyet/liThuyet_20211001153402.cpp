#include<iostream>
using namespace std;

class PhanSo{
    private:
        int tu;
        int mau;
    public:
        friend istream& operator >>(istream &is, PhanSo &ps);
        friend ostream& operator <<(ostream& os, PhanSo ps);
        PhanSo operator +(PhanSo ps);
        PhanSo operator -(PhanSo ps);
        PhanSo operator *(PhanSo ps);
        PhanSo operator /(PhanSo ps);
        PhanSo operator +=(PhanSo ps);
        PhanSo operator -=(PhanSo ps);
        PhanSo operator *=(PhanSo ps);
        PhanSo operator /=(PhanSo ps);
        bool operator >(PhanSo ps);
        bool operator <(PhanSo ps);
        bool operator ==(PhanSo ps);
        bool operator <=(PhanSo ps);
        bool operator >=(PhanSo ps);
        PhanSo operator ++(PhanSo ps);
        PhanSo operator --(PhanSo ps);
        bool operator =(PhanSo ps);
};
istream& operator >> (istream &is, PhanSo &ps){
    cout<<"\nNhap tu: ";
    is >> ps.tu;
    cout<<"\nNhap mau: ";
    is >> ps.mau;
    return is;
}
ostream& operator<<(ostream& os, PhanSo ps){
    os<<"\nPhan so la: "<<ps.tu<<"/"<<ps.mau<<endl;
    return os;
}
PhanSo PhanSo::operator+(PhanSo ps){
    PhanSo t;
    t.tu=tu*ps.mau+mau*ps.tu;
    t.mau=mau*ps.mau;
    return t;
}
PhanSo PhanSo::operator-(PhanSo ps){
    PhanSo t;
    t.tu=tu*ps.mau-mau*ps.tu;
    t.mau=mau*ps.mau;
    return t;
}
PhanSo PhanSo::operator*(PhanSo ps){
    PhanSo t;
    t.tu=tu*ps.tu;
    t.mau=mau*ps.mau;
    return t;
}
PhanSo PhanSo::operator/(PhanSo ps){
    PhanSo t;
    t.tu=tu*ps.mau;
    t.mau=mau*ps.tu;
    return t;
}
PhanSo PhanSo::operator+=(PhanSo ps){
    tu=tu*ps.mau+mau*ps.tu;
    mau=mau*ps.mau;
    return *this;
}
PhanSo PhanSo::operator-=(PhanSo ps){
    tu=tu*ps.mau-mau*ps.tu;
    mau=mau*ps.mau;
    return *this;
}
PhanSo PhanSo::operator*=(PhanSo ps){
    tu=tu*ps.tu;
    mau=mau*ps.mau;
    return *this; 
}
PhanSo PhanSo::operator/=(PhanSo ps){
    tu=tu*ps.mau;
    mau=mau*ps.tu;
    return *this; 
}
bool PhanSo::operator>(PhanSo ps){
    if(tu*ps.mau>mau*ps.tu) return true;
    else return false;
}
bool PhanSo::operator<(PhanSo ps){
    if(tu*ps.mau<mau*ps.tu) return true;
    else return false;
}
bool PhanSo::operator==(PhanSo ps){
    if(tu*ps.mau==mau*ps.tu) return true;
    else return false;
}
bool PhanSo::operator<=(PhanSo ps){
    if(tu*ps.mau<=mau*ps.tu) return true;
    else return false;
}
bool PhanSo::operator>=(PhanSo ps){
    if(tu*ps.mau>=mau*ps.tu) return true;
    else return false;
    return false;
}
PhanSo PhanSo::operator++(PhanSo &ps){
    tu=tu+mau;
    mau=mau;
    return *this; 
}
PhanSo PhanSo::operator--(PhanSo &ps){
    if(tu>mau){
        tu=tu-mau;
        mau=mau;
        return *this;
    }
    else{
        tu=mau-tu;
        mau=mau;
        return *this; 
    } 
}
PhanSo PhanSo::operator=(PhanSo ps){
    tu=ps.tu;
    mau=ps.mau;
    return *this; 
}
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