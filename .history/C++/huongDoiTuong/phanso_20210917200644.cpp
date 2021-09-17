#include<iostream>
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
        void tong(PhanSo a, PhanSo b);
        void hieu(PhanSo a, PhanSo b);
        void tich(PhanSo a, PhanSo b);
        void thuong(PhanSo a, PhanSo b);
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
void tong(PhanSo a, PhanSo b){
	PhanSo tong;
	tong.gettu()=a.gettu()*b.getmau()+b.gettu()*a.getmau();
    tong.getmau()=a.getmau()b.getmau();
	cout <<"\nTong phan so la: "<<tong.gettu()<<"/"<<tong.getmau();
}
void hieu(PhanSo a, PhanSo b)
{
	PhanSo hieu;
	hieu.gettu()=a.gettu()*b.getmau()-b.gettu()*a.getmau();
    hieu.getmau()=a.getmau()*b.getmau()
	cout <<"\nHieu phan so la: "<<hieu.gettu()<<"/"<<hieu.getmau();
}
void tich(PhanSo a, PhanSo b)
{
	PhanSo tich;
	tich.gettu()=a.gettu()*b.gettu();
	tich.getmau()=a.getmau()*b.getmau();
	cout<<"\nTich phan so la: "<<tich.gettu()<<"/"<<tich.getmau();
}
void thuong(PhanSo a, PhanSo b)
{
	PhanSo thuong;
	thuong.gettu()=a.gettu()*b.getmau();
	thuong.getmau()=a.getmau()*b.gettu();
	cout<<"\nThuong phan so la: "<<thuong.gettu()<<"/"<<thuong.getmau();
}
int main(){
    Phanso ps1,ps2;
    ps1.nhap();
    ps2.nhap();
    ps1.xuat();
    ps2.xuat();
    tong(ps1,ps2);
    return 0;
}