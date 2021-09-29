#include<iostream>
#include<math.h>
using namespace std;
class DonThuc{
    private:
       int bac,heso;
    public:
       void nhap();
       void xuat();
       void giaTri();
       void soSanh();
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
void DonThuc::giaTri(){
    int x;
    cout<<"\n Nhap gia tri x: ";
    cin >> x;
    cout<<"\n Gia tri don thuc la: "<<heso*pow(x,bac);
}
int main(){
    DonThuc a;
    a.nhap();
    a.xuat();
    a.giaTri();
}