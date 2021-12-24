#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

struct Sach{
    int maso;
    string nhande, tenTacGia,NXB;
    int namXuatBan;
};
void nhap(Sach &a){
    cout<<"\nNhap ma so sach: ";
    cin>>a.maso;
    cout<<"\nNhap nhan de: ";cin>>a.nhande;
    cout<<"\nNhap ten tac gia: ";
    fflush(stdin);
    getline(cin,a.tenTacGia);
    cout<<"\nNhap nha xuat ban: ";
    fflush(stdin);
    getline(cin,a.NXB);
    cout<<"\nNhap Nam xuat ban:";cin>>a.namXuatBan;
}
void nhapDS(Sach a[], int &n){
    cout<<"\nNhap so luong sach: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nNhap quyen sach thu "<<i+1;
        nhap(a[i]);
    }
}
void xuat(Sach &a){
    cout<<"-----------------------------";
    cout<<"\nMa so sach: "<<a.maso;
    cout<<"\nNhan de: "<<a.nhande;
    cout<<"\nTen tac gia: "<<a.tenTacGia;
    cout<<"\nNha xuat ban: "<<a.NXB;
    cout<<"\nNam xuat ban: "<<a.namXuatBan;
}
void xuatDS(Sach a[], int n){
    for(int i=0; i<n; i++){
        cout<<"\nQuyen sach thu "<<i+1;
        xuat(a[i]);
    }
}
void timSachTheoMaSo(Sach a[], int n){
    int maSach,count=0;
    cout<<"Nhap ma cuon sach can tim: "<<endl;
    cin>>maSach;
    for(int i=0;i<n; i++){
        if(a[i].maso==maSach){
            xuat(a[i]);
            count++;
        }
    }
    if(count==0) cout<<"\nKhong tim thay cuon sach";
}
void timSachTheoTacGia(Sach a[], int n){
    string tacgia;
    int count = 0;
    cout<<"Nhap ten tac gia can tim: "<<endl;
    getline(cin, tacgia);
    for(int i=0;i<n; i++){
        if(a[i].tenTacGia==tacGia){
            xuat(a[i]);
            count++;
        }
    }
    if(count==0) cout<<"\nKhong tim thay cuon sach cua tac gia";
}
void timSachTheoNamXuatBan(Sach a[], int n){
    int namXB,count=0;
    cout<<"Nhap nam xuat ban can tim: "<<endl;
    cin>>namXB;
    for(int i=0;i<n; i++){
        if(a[i].namXuatBan==namXB){
            xuat(a[i]);
            count++;
        }
    }
    if(count==0) cout<<"\nKhong tim thay cuon sach";
}
void timSachTheoNhanDe(Sach a[], int n){
    string nhanDe;
    int count = 0;
    cout<<"Nhap ten nhan de: "<<endl;
    getline(cin, nhanDe);
    for(int i=0;i<n; i++){
        if(a[i].nhande==nhanDe){
            xuat(a[i]);
            count++;
        }
    }
    if(count==0) cout<<"\nKhong tim thay cuon sach co nhan de do";
}
int main(){
    Sach a[1000];int n;
    nhapDS(a,n);
}