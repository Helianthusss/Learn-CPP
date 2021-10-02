#include<iostream>
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

int main(){
    SinhVien sv[max];
    int n;
    cout<<"\nNhap so luong sinh vien: ";
    cin>>n;
    for(int i=0;i<n;i++){
        static int stt = 1; 
        cin>>sv[i] ;
    } 
    return 0;
    
}


