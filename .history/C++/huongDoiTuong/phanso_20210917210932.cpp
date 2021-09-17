#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class PhanSo{
    private:
        int tu;
        int mau;
    public: 
        void nhap();
        void xuat();
        int gettu(); 
        int getmau();
};
void PhanSo::nhap(){
	cout<< "\nNhap vao tu so ";
	cin>> tu;
	do{
		cout <<"Nhap vao mau so ";
		cin >>mau;
		if(mau==0)
			cout<< "\nMau phai khac khong!!!\nVui long kiem tra lai!!!";
	}while(mau==0);
}
void PhanSo::xuat(){
	cout<<"Phan so: "<<tu <<" / "<<mau;
}
int PhanSo::gettu(){
    return tu;
}
int PhanSo::getmau(){
    return mau;
}
void tongps(PhanSo a, PhanSo b){
	PhanSo tong;
	tong.gettu()=(a.gettu()*b.getmau())+(b.gettu()*a.getmau());
    tong.getmau()=a.getmau()*b.getmau();
	cout <<"\nTong phan so la: "<<tong.gettu()<<"/"<<tong.getmau();
}
void hieups(PhanSo a, PhanSo b){
	PhanSo hieu;
	hieu.gettu()=a.gettu()*b.getmau()-b.gettu()*a.getmau();
    hieu.getmau()=a.getmau()*b.getmau();
	cout <<"\nHieu phan so la: "<<hieu.gettu()<<"/"<<hieu.getmau();
}
void tichps(PhanSo a, PhanSo b){
	PhanSo tich;
	tich.gettu()=a.gettu()*b.gettu();
	tich.getmau()=a.getmau()*b.getmau();
	cout<<"\nTich phan so la: "<<tich.gettu()<<"/"<<tich.getmau();
}
void thuongps(PhanSo a, PhanSo b){
	PhanSo thuong;
	thuong.gettu()=a.gettu()*b.getmau();
	thuong.getmau()=a.getmau()*b.gettu();
	cout<<"\nThuong phan so la: "<<thuong.gettu()<<"/"<<thuong.getmau();
}
int main(){
    PhanSo ps1,ps2;
    ps1.nhap();
    ps2.nhap();
    ps1.xuat();
    ps2.xuat();
    tongps(ps1,ps2);
    return 0;
}