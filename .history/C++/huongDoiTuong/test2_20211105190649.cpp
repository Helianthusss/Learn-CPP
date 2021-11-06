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
class HoaDon:public MatHang{
    private:
        string thd;
        string dsmh;
        int slmh;
    public:
        void nhap();
        void In();
        float tongt(float *t, int n);
        float tien();
        string getThd();
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
int MatHang::getSL(){
    return sl;
}
float MatHang::getDg(){
    return dg;
}
void HoaDon::nhap(){
    cin.ignore(256, '\n');
    cout<<"\nNhap ten hoa don: ";
    getline(cin,thd);
    cin.ignore(256, '\n');
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
    return (getSL()*getDg());
}
float HoaDon::tongt(float *t, int n){
    int sum=1;
    for(int i=1; i <= n; i++){
        sum+=tien()+*(t+1);
    }
    return sum;
}
string HoaDon::getThd(){
    return thd;
}
int main(){
    HoaDon *dshd;
    int n; float *t; 
    //danh sach cac hoa don can nhap
    cout<<"\nNhap so luong hoa don";
    cin >>n;
    dshd = new HoaDon[n];
    //nhap gia tri cho danh sch hoa don
    for (int i=1; i<=n; i++)
        dshd[i].nhap();
        cout<<"\nDanh sach hoa don: ";
    //xuat ra danh sach cac hoa don
    for (int i=1; i<=n;i++)
        dshd[i].In();
        cout<<"\nDanh sanh hoa don: ";
    //dua ra tong tien
    cout<<"\nTong tien moi hoa don"<<dshd->tongt(t,n);
    delete t;
    //dua ra hoa don co tong tien lon nhat
    int i = 0;
    int max = dshd[i].tongt(t,n);
    for (i=1;i<=n;i++)
        if (dshd[i].tongt(t,n)>max)
            max= dshd[i].tongt(t,n);
    for (i=1;i<=n;i++)
        if (dshd[i].tongt(t,n)==max)
            dshd[i].In();
    //tim kiem 1 hoa don theo ten
    string timten;
    cout<<"\nNhap ten can tim:";
    cin>>timten;
    for (i=1;i<=n;i++)
        if (dshd[i].getThd()==timten);
        dshd[i].In();
    return 0;
}