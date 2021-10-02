// Tran Duc Anh
//MSSV: 6151071034
#include<bits/stdc++.h>
#define max 100
using namespace std;

class SinhVien{
    private:
        int msv;
        string name;
        int year;
        string Class;
        int  Dtb;
    public:
        friend istream& operator >>(istream &is, SinhVien &sv);
        friend ostream& operator <<(ostream& os, SinhVien sv);
        bool soSanh(SinhVien sv);
        bool operator >(SinhVien sv);
        bool operator <(SinhVien sv);
        int getDtb();
};
istream& operator >> (istream &is, SinhVien &sv){
    cout<<"\nNhap ma sinh vien: ";
    is >> sv.msv;
    cin.ignore();
    cout<<"\nNhap ten sinh vien: ";
    is >> sv.name;
    cout<<"\nNhap nam sinh: ";
    is >> sv.year;
    cout<<"\nNhap lop: ";
    is >> sv.Class;
    cout<<"\nNhap diem trung binh: ";
    is >> sv.Dtb;
    return is;
}
ostream& operator<<(ostream& os, SinhVien sv){
    os<<"\nMa sinh vien: "<<sv.msv;
    os<<"\nTen sinh vien: "<<sv.name;
    os<<"\nNam sinh: "<<sv.year;
    os<<"\nLop: "<<sv.Class;
    os<<"\nDiem trung binh: "<<sv.Dtb;
    return os;
}
bool SinhVien::soSanh(SinhVien sv){
    if(Dtb > sv.Dtb) 
       return true;
    else 
        return false;
}
void count(){
    static int stt = 1;
    cout<<"STT: "<<stt;
    stt++;
}
bool SinhVien::operator<(SinhVien sv){
    return Dtb <sv.Dtb;
}
bool SinhVien::operator>(SinhVien sv){
   return year > sv.year;
}
void sapXepGiamdanDtb(SinhVien sv[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i=1;j<n;j++){
            if(sv[i]<sv[j]) swap(sv[i],sv[j]);
        }
    }
}
void sapXepTangDanNamSinh(SinhVien sv[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i=1;j<n;j++){
            if(sv[i]>sv[j]) swap(sv[i],sv[j]);
        }
    }
}
int SinhVien::getDtb(){
    return Dtb;
}

void nhapDanhSach(SinhVien sv[], int n){
    cout<<"\nNhap so luong sinh vien: ";
    cin>>n ;
    cout<<"\nNhap danh sach sinh vien!!";
    for(int i=0;i<n;i++){
        count(); 
        cin>>sv[i] ;
    }    
}
void xuatDanhSach(SinhVien sv[],int n){
        cout<<"\nXuat danh sach sinh vien!!";
    for(int i=0;i<n;i++){
        count(); 
        cout<<sv[i] ;
    }
}
int main(){
    SinhVien sv[max];
    int n;
    nhapDanhSach(sv,n);
    xuatDanhSach(sv,n);
    cout<<"\nDanh sach sinh vien giam dan theo diem trung binh";
    sapXepGiamdanDtb(sv,n);
    xuatDanhSach(sv,n);
    sapXepTangDanNamSinh(sv,n);
    for(int i=0;i<n;i++){
        count(); 
        cout<<sv[i];
    }

    return 0;  
}


