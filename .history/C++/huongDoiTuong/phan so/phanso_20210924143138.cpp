#include "phanSo.h"
#include "iostream"
using namespace std;
 
PhanSo::PhanSo()
{
    iTuSo = 0;
    iMauSo = 1;
}
 
PhanSo::PhanSo(int iTu, int iMau)
{
    iTuSo = iTu;
    if (iMau != 0)
    {
        iMauSo = iMau;
    }
    else
    {
        iMauSo = 1;
    }
}
 
void PhanSo::Nhap()
{
    cout << "\tNhap tu So: "; cin >> iTuSo;
    cout << "\tNhap mau so: "; cin >> iMauSo;
}
 
void PhanSo::Xuat()
{
    cout << iTuSo << "/" << iMauSo << "\n"; } int PhanSo::UCLN(int a, int b) { if (a==0 ||b==0) return a+b; while (a !=b) { if(a>b)
                    a=a-b;
                else
                    b=b-a;
            }
            return a;
        }
 
 
void PhanSo::RutGon()
{
    int iUCLN = UCLN(iTuSo, iMauSo);
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
 
PhanSo::~PhanSo()
{
    cout << "\nVao ham huy";      
}