#include<iostream>
using namespace std;

struct CongNhan{
    char ten[30];
    int namsinh;
    int sogiolam;
};
void NhapMotCongNhan(CongNhan *cn){
    fflush(stdin);
    cout<<"\nTen cong nhan: ";
    cin.getline(cn->ten,30);
    cout<<"\nNam sinh: ";
    cin>>cn->namsinh;
    cout<<"\nNhap so gio lam: ";
    cin>>cn->sogiolam;
}
void NhapDanhSach(CongNhan *&danhsach, int &soluong){
    cout<<"\nNhap so luong danh sach: ";
    cin>>soluong;
    for(int i=0;i<soluong;i++){
       cout<<"\n   Nhap cong nhan thu"<<i+1<<":";
       NhapMotCongNhan(&*(danhsach+i));
    }
}
void XuatMotCongNhan(CongNhan *cn){
    cout<<"\n Ten cong nhan: "<<cn->ten;
    cout<<"\nNam sinh cong nhan: "<<cn->namsinh;
    cout<<"\nSo gio lam cua cong nhan: "<<cn->sogiolam;
}
void InDanhSach(CongNhan *danhsach, int soluong){
	printf("\n +===============DANH SACH CONG NHAN===============+");
    for(int i=0;i<soluong;i++){
	    cout<<"\nCong nhan thu"<<i+1<<":";
        XuatMotCongNhan(danhsach+i);	
	}
}
void SapXepTheoGioLam(CongNhan *danhsach, int soluong){
    CongNhan temp;
    for(int i=0;i<soluong-1;i++){
        for(int j=0;j<soluong;j++){
            if((danhsach+i)->sogiolam > (danhsach+j)->sogiolam){
                temp = *(danhsach+i);
                *(danhsach+i) = *(danhsach+j);
                *(danhsach+j) = temp;
            }
        }
    }
}
int main(){
    CongNhan *danhsach;
    int soluong;
    danhsach = new CongNhan;
    NhapDanhSach(danhsach,soluong);
    InDanhSach(danhsach,soluong);
    cout<<"\nSap xep cong nhan theo gio lam";
    SapXepTheoGioLam(danhsach,soluong);
    InDanhSach(danhsach,soluong);
    delete [] danhsach;
    return 0;
}