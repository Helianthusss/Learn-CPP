#include<iostream>
#include<math.h>
using namespace std;

struct PHANSO{
   int tu,mau;
};
void nhapPhanSo(PHANSO &phanso){
	cout<< "\nNhap vao tu so ";
	cin>> phanso.tu;
	do{
		cout <<"Nhap vao mau so ";
		cin >>phanso.mau;
		if(phanso.mau==0)
			cout<< "\nMau phai khac khong!!!\nVui long kiem tra lai!!!";
	}while(phanso.mau==0);
}
void xuatPhanSo(PHANSO phanso){
	cout<<"Phan so: "<< phanso.tu <<" / "<< phanso.mau;
}
int UCLN(int a, int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
void rutGonPhanSo(PHANSO &phanso){
	int c=UCLN(phanso.tu,phanso.mau);
	phanso.tu=phanso.tu/c;
	phanso.mau=phanso.mau/c;
}
PHANSO tongPhanSo(PHANSO a,PHANSO b)
{
	PHANSO tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
	rutGonPhanSo(tong);
	return tong;
}
PHANSO hieuPhanSo(PHANSO a,PHANSO b)
{
	PHANSO hieu;
	hieu.tu=a.tu*b.mau-b.tu*a.mau;
    hieu.mau=a.mau*b.mau;
	rutGonPhanSo(hieu);
	return hieu;
}
PHANSO tichPhanSo(PHANSO a,PHANSO b)
{
	PHANSO tich;
	tich.tu=a.tu*b.tu;
	tich.mau=a.mau*b.mau;
	rutGonPhanSo(tich);
	return tich;
}
PHANSO thuongPhanSo(PHANSO a,PHANSO b)
{
	PHANSO thuong;
	thuong.tu=a.tu*b.mau;
	thuong.mau=a.mau*b.tu;
	rutGonPhanSo(thuong);
	return thuong;
}
int soSanhPhanSo(PHANSO a,PHANSO b){
    return a.tu*b.tu-a.mau*b.tu;
}
int kiemTraPhanSo(PHANSO x)
{
    if(x.tu*x.mau>0)
        return 1;
    else if(x.tu*x.mau<0)
        return -1;
    return 0;
}
int main(){
    PHANSO ps1,ps2;
	cout<<"\nNhap phan so thu nhat ";
	nhapPhanSo(ps1);
    rutGonPhanSo(ps1);
	xuatPhanSo(ps1);
	cout<<"\nNhap phan so thu 2";
	nhapPhanSo(ps2);
    rutGonPhanSo(ps2);
	xuatPhanSo(ps2);
    cout<<"\nTinh tong hieu tich thuong 2 phan so";
    PHANSO tong= tongPhanSo(ps1,ps2);
	cout<<"\nTong ";
	xuatPhanSo(tong);
	PHANSO hieu=hieuPhanSo(ps1,ps2);
	cout<<"\nHieu ";
	xuatPhanSo(hieu);
	PHANSO tich=tichPhanSo(ps1,ps2);
	cout<<"\nTich ";
	xuatPhanSo(tich);
	PHANSO thuong=thuongPhanSo(ps1,ps2);
	cout<<"\nThuong ";
	xuatPhanSo(thuong);
    cout<<"\n Kiem tra phan so 1"<<endl;
    if(kiemTraPhanSo(ps1)==1)
        cout<<"Phan so 1 duong";
    if(kiemTraPhanSo(ps1)==-1)
        cout<<"Phan so 1 am";
    if(kiemTraPhanSo(ps1)==0)
        cout<<"Phan so 1 =0";
    cout<<"\n Kiem tra phan so 2"<<endl;
    if(kiemTraPhanSo(ps2)==1)
        cout<<"Phan so 2 duong";
    if(kiemTraPhanSo(ps2)==-1)
        cout<<"Phan so 2 am";
    if(kiemTraPhanSo(ps2)==0)
        cout<<"Phan so 2 =0";
    cout<< "\nSo sanh 2 phan so"<<endl;
    int kq=soSanhPhanSo(ps1,ps2);
    if(kq>0)
        cout<<"Phan so 1 lon hon phan so 2";
    else if(kq<0)
        cout<<"Phan so 2 lon hon phan so 1";
    else
        cout<<"2 phan so bang nhau";
    return 0;
}