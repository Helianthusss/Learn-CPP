#include<iostream>
using namespace std;

struct PHANSO{
   int tu,mau;
};
void nhapPhanSo(PHANSO &phanso){
	cout<< "\nNhap vao tu so ";
	cin>> phanso.tu;
	do{
		cout <<"\nNhap vao mau so ";
		cin >>phanso.mau;
		if(phanso.mau==0)
			cout<< "\nMau phai khac khong!!!\nVui long kiem tra lai!!!";
	}while(phanso.mau==0);
}
void xuatPhanSo(PHANSO phanso){
	cout<<"Phan so: "<< phanso.tu <<" / "<< phanso.mau;
}
int main(){
    PHANSO phanso;
    nhapPhanSo(phanso);
    xuatPhanSo(phanso);
    return 0;
}