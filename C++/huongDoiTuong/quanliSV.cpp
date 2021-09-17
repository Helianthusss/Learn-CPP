// Tran Duc Anh
// MSSV: 6151071034
#include<iostream>
using namespace std;

class Students{
    private:
        string name;
        char sex[10];
        int day;
        int month;
        int year;
        float mediumScore;
        int soluong;
    public:
        void nhap();
        void nhapDanhSach();
        void xuat();
        void xuatDanhSach();
};
void Students::nhap(){
    fflush(stdin);
    cout<<"\nNhap ten sinh vien:";
    getline(cin,name);
    cout<<"\nNhap gioi tinh:";
    cin>> sex;
    cout<<"\nNhap ngay sinh:";
    cin >> day>> month>>year;
    cout<<"\nNhap diem trung binh: " ;
    cin>>mediumScore;
}
void Students::nhapDanhSach(){
    cout<<"\nNhap so luong sinh vien: ";
    cin >>soluong;
    for(int i=0;i<soluong; i++){
        cout<<"\nNhap sinh vien thu "<<i+1;
        nhap();
    }
}
void Students::xuat(){
    cout<<"\nTen sinh vien la: "<<name;
    cout<<"\nGioi tinh sinh vien la:"<<sex;
    cout<<"\nNgay sinh cua sinh vien: "<<day<<"/"<<month<<"/"<<year;
    cout<<"\nDiem trung binh cua sinh vien la: "<<mediumScore;
}
void Students::xuatDanhSach(){
    for(int i=0; i<soluong; i++){
        cout<<"\nXuat sinh vien thu "<<i+1;
        xuat();
    }
}
int main(){
    Students a;
    a.nhapDanhSach();
    a.xuatDanhSach();
    return 0;
}