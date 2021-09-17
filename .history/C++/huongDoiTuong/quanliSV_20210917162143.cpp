// Tran Duc Anh
// MSSV: 6151071034
#include<iostream>
using namespace std;

class Students{
    private:
        string name;
        char sex;
        int day,month,year;
        int mediumScore;
    public:
        void nhap();
        void xuat();
};
void Students::nhap(){
    fflush(stdin);
    cout<<"\nNhap ten sinh vien:";
    getline(cin,name);
    cout<<"\nNhap gioi tinh:";
    cin>> sex;
    cout<<"\nNhap ngay sinh:";
    cin>> day >> month >>year;
    cout<<"\nNhap diem trung binh: " ;
    cin>>mediumScore;
}
void Students::xuat(){
    cout<<"\nTen sinh vien la: "<<name;
    cout<<"\nGioi tinh sinh vien la:"<<sex;
    cout<<"\nNgay sinh cua sinh vien: "<<day<<month<<year;
    cout<<"\nDiem trung binh cua sinh vien la: "<<mediumScore;
}
int main(){
    Students a;
    a.nhap();
    a.xuat();
    return 0;
}