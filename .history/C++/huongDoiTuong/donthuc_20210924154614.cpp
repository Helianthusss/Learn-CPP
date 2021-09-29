#include<iostream>
#include<math.h>
using namespace std;
class DonThuc{
    private:
       int bac,heso;
    public:
       void nhap();
       void xuat();
       void giaTri();
       void soSanh(const DonThuc &);
       void daoHam();
       void nguyenHam();
       void tong(const DonThuc &b);
       void hieu(const DonThuc &);
       void tich(const DonThuc &);
       void thuong(const DonThuc &);  
};
void DonThuc::nhap(){
    cout<<"\nNhap bac don thuc:";
    cin >> bac;
    cout <<"\nNhap he so don thuc: ";
    cin>> heso;
}
void DonThuc::xuat(){
    cout<<"\nDon thuc la: "<<heso<<"x^"<<bac;
}
void DonThuc::giaTri(){
    int x;
    cout<<"\n Nhap gia tri x: ";
    cin >> x;
    cout<<"\n Gia tri don thuc la: "<<heso*pow(x,bac);
}
void DonThuc::soSanh(const DonThuc &b){
    if( this->bac== b.bac){
        if(this->heso > b.heso) cout<<"\n don thuc 1 lon hon don thuc 2";
        else if(this->heso < b.heso) cout<<"\ndon thuc 1 nho hon don thuc 2";
        else cout <<"\n hai da thuc bang nhau";
    }
    else 
      cout<<"\n2 da thuc khac bac nhau";
}
void DonThuc::daoHam(){
    cout<<"\nDao ham don thuc: "<<heso*bac<<"x^"<<bac-1;
}
void DonThuc::nguyenHam(){
    cout<<"\nNguyen ham don thuc la: "<<float(heso)/(bac+1)<<"x^"<<bac+1;
}
void DonThuc::tong(const DonThuc &b){
    if( this->bac== b.bac){
        cout<<"\nTong 2 don thuc la: "<<this->heso+b.heso<<"x^"<<bac;
    }
    else
       cout <<"\nHai da thuc khong cung bac";
}
void DonThuc::hieu(const DonThuc &b){
    if( this->bac== b.bac){
        cout<<"\nHieu 2 don thuc la: "<<this->heso-b.heso<<"x^"<<bac;
    }
    else
       cout <<"\nHai da thuc khong cung bac";
}
void DonThuc::tich(const DonThuc &b){
    cout<<"\nTich 2 don thuc la: "<<this->heso*b.heso<<"x^"<<this->bac+b.bac;
}
void DonThuc::thuong(const DonThuc &b){
    cout<<"\nThuong 2 don thuc la: "<<float(this->heso)/b.heso<<"x^"<<this->bac-b.bac;
}
int main(){
    DonThuc a,b;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
/*   if(kq==true){
        cout <<"\n Don thuc a lon hon don thuc b";
    }
    else
        cout <<"\n Don thuc b lon hon don thuc a";*/
   a.tong(b);
   a.hieu(b);
   a.tich(b);
   a.thuong(b);

}