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
        int gettu(){
            return tu;
        }
        int getmau(){
            return mau;
        }
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

void tongps(PhanSo a, PhanSo b){
	int tu1,mau1;
	tu1=a.gettu()*b.getmau()+b.gettu()*a.getmau();
    mau1=a.getmau()*b.getmau();
	cout <<"\nTong phan so la: "<<tu1<<"/"<<mau1;
}
void hieups(PhanSo a, PhanSo b){
	int tu2,mau2;
	tu2=a.gettu()*b.getmau()-b.gettu()*a.getmau();
    mau2=a.getmau()*b.getmau();
	cout <<"\nHieu phan so la: "<<tu2<<"/"<<mau2;
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