#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	char ten[30];// kieu ki tu
	int age;
};
void nhapThongTinMotSinhVien(SinhVien sv){
	fflush(stdin);
	cout<<"\nNhap Ten sinh vien: ";
	gets(sv.ten);
	cout<<"\nNhap tuoi sinh vien: ";
	cin>>sv.age;
}
void xuatThongTinMotSinhVien(SinhVien sv){
	cout<<"\nXuat ten sinh vien: "<<sv.ten;
	cout<<"\n Xuat tuoi sinh vien: "<< sv.age;
}
int main(int argc, char** argv) {
	SinhVien sv;
	nhapThongTinMotSinhVien(sv);
	xuatThongTinMotSinhVien(sv);
	return 0;
}
