#include <iostream>
#include<string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	char ten[30];// kieu ki tu
	int age;
};
void nhapThongTinMotSinhVien(SinhVien sv){
	cout<<"\nNhap Ten sinh vien: ";
	cin>>sv.ten;
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
