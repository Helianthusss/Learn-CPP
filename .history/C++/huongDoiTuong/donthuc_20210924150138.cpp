#include<iostream>
using namespace std;
class DonThuc{
    private:
       int bac,heso;
    public:
       void nhap();
       void xuat();
       void giaTri(int x);
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
int main(){
    DonThuc a;
    a.nhap();
    a.xuat();
}