#include<iostream>
using namespace std;

class MatHang{
    private:
        string tmh;
        int sl;
        float dg;
    public:
        void nhap();
        void In();
        int getSL();
        float getDg();
};
class HoaDon{
    private:
        string thd;
        string dsmh;
        int slmh;
    public:
        void nhap();
        void In();
        float tongt(float *t, int n);
        float tien();
};
void MatHang::nhap(){\
    fflush(stdin);
    cout<<"\nNhap ten mat hang: ";
    getline(cin,tmh);
    cout<<"\nNhap so luong: ";
    cin>>sl;
    cout<<"\nMhap dom gia: ";
    cin>>dg;
}
void MatHang::In(){
    cout<<"\nTen mat hang: "<<tmh;
    cout<<"\nSo luong: "<<sl;
    cout<<"\nDon gia: "<<dg;
}
int MatHang::getSl(){
    return sl;
}
float MatHang::getDg(){
    return dg;
}
void HoaDon::nhap(){
    fflush(stdin);
    cout<<"\nNhap ten hoa don: ";
    getline(cin,thd);
    fflush(stdin);
    cout<<"\nNhap danh sach mat hang: ";
    getline(cin,dsmh);
    cout<<"\nNhap so luong mat hang: ";
    cin>>slmh;
}
void HoaDon::In(){
    cout<<"\nTen hoa don: "<<thd;
    cout<<"\nDanh sach mat hang: "<<dsmh;
    cout<<"\nSo luong mat hang: "<<slmh;
}
float HoaDon::tien(){
    return (getSl()*getDg());
}
float HoaDon::tongt(float *t, int n){
    int sum=1;
    for(int i=1; i <= n; i++){
        s+=tien(+(t+1));
    }
    return sum;
}
int main(){
    HD*dshd;
    int n; float t; //danh sach cac hoa don can nhap
    cout<<"n nhap cac hao don";cin >>n;
    dshd=new HD[n];
    //nhap gia tri cho danh sch hoa don
    for ( int i=1; i<=n; i++)
        dshd[i].nhap();
        cout<<"n  danh sach hoa don:n";
    //xuat ra danh sach cac hoa don
    for (i=1; i<=n;i++)
        dshd[i].In();
        cout<<"n danh sanh hoa don:n";
    //dua ra tong tien
    cout<<"n tong tien moi hoa don"<<tongt(t,n);
    delete t;
    //dua ra hoa don co tong tien lon nhat
    int max = dshd[i].tongt();
    for (i=1;i<=n;i++)
        if (dshd[i].tongt()>max)
            max= dshd[i].tongt();
    for (i=1;i<=n;i++)
        if (dshd[i].tongt()==max()
            dshd[i].In();
    //tim kiem 1 hoa don theo ten
    char timten[30]
    cout<<"n nhap ten can tim:";
    cin>>timten;
    for (i=1;i<=n;i++)
        if (dshd[i].thd==timten();
        dshd[i].In();
    cin.ignore(2);
}
