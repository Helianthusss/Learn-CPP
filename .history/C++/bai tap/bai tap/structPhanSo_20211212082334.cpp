#include "PhanSo.h"
#include "iostream"
using namespace std;
struct PhanSo{
    float tu,mau;
};
void Nhap(PhanSo a){
    cout << "\tNhap tu So: "; cin >> a.tu;
    do{
        cout << "\tNhap mau so: "; cin >> mau;
        if(mau == 0) cout<<"\nNhap mau so khong hop le!!! Vui long nhap lai!!!";
    }while(mau==0);
}
void Xuat(PhanSo a){
    cout << a.tu << "/" << a.mau << "\n"; 
}
int PhanSo::UCLN(int a, int b) { 
    if (a==0 ||b==0) return a+b;
    while (a !=b) { 
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
void RutGon()
{
    int UCLN = UCLN(, iMauSo);
    iTuSo = iTuSo / iUCLN;
    iMauSo = iMauSo / iUCLN;
}
PhanSo PhanSo::Cong(const PhanSo &b)
{
    return PhanSo((iTuSo*b.iMauSo) + (iMauSo*b.iTuSo),iMauSo*b.iMauSo);
}
PhanSo PhanSo::Tru(const PhanSo &b)
{
      return PhanSo((iTuSo*b.iMauSo) - (iMauSo*b.iTuSo),iMauSo*b.iMauSo);
}
 
PhanSo PhanSo::Nhan(const PhanSo &b) 
{
     return PhanSo(this->iTuSo*b.iTuSo,this->iMauSo*b.iMauSo);
}
 
PhanSo PhanSo::Chia(const PhanSo &b)
{
    return PhanSo(this->iTuSo*b.iMauSo,this->iMauSo*b.iTuSo);
}
 
int PhanSo::SoSanh(const PhanSo &b)
{
    int x = this->iTuSo / this->iMauSo;
    int y = b.iTuSo / b.iMauSo;
    if (x < y) return -1; if (x > y)
        return 1;
    else return 0;
}