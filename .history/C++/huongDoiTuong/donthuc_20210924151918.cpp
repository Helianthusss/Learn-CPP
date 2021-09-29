#include<iostream>
#include<math.h>
using namespace std;
class DonThuc{
    private:
       int bac,heso;
    public:
       void nhap();
       void xuat();
       int getBac();
       int getHeSo();
       void giaTri();
       bool soSanh(const DonThuc &);
       void daoHam();
       void nguyenHam();
       void tong();
       void hieu();
       void tich();
       void thuong();  
};
void DonThuc::nhap(){
    cout<<"\nNhap bac don thuc:";
    cin >> bac;
    cout <<"\nNhap he so don thuc: ";
    cin>> heso;
}
void DonThuc::xuat(){
    cout<<"\nDon thuc la: "<<heso<<"x^"<<bac;
}
int DonThuc::getBac(){
    return bac;
}
int DonThuc::getHeSo(){
    return bac;
}
void DonThuc::giaTri(){
    int x;
    cout<<"\n Nhap gia tri x: ";
    cin >> x;
    cout<<"\n Gia tri don thuc la: "<<heso*pow(x,bac);
}
bool soSanh(const DonThuc &b);{
    if( this->bac= b.bac){
        if(this->heso > b.heso) return true;
        else return false;
    }
    else 
       cout<<"\n hai phan so khong cung bac";
}
int main(){
    DonThuc a,b;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
    int kq=a.soSanh(b);
    if(kq==true){
        cout <<"\n Don thuc a lon hon don thuc b";
    }
    else
        cout <<"\n Don thuc b lon hon don thuc a";
}