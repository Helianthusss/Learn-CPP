#include<iostream>
#include<string>
using namespace std;
class sinhvien{
    private:
        string msv, hoten, lop;
        int namsinh;
        float diemtb;
    public:
        friend istream & operator>>(istream &vao, sinhvien&sv);
        friend ostream& operator<<(ostream &ra, sinhvien sv);
        bool operator > (sinhvien sv);
        //[], = hàm thành phần của lớp
        // còn lại có thể thiết kế hàm bạn
        bool operator < (sinhvien sv);
        float getDiemtb();
};
istream& operator >> (istream &vao, sinhvien &sv){
    cin.ignore();
    cout<<"Nhap ma sinh vien: ";
    getline(cin,sv.msv);
    cin.ignore();
    cout <<"Nhap ho va ten: ";
    getline(cin,sv.hoten);
    cin.ignore();
    cout<<"Lop: ";
    getline(cin, sv.lop);
    cin.ignore();
    cout<<"Nam sinh: ";
    cin>> sv.namsinh;
    cout <<"Diem trung binh: ";
    cin>> sv.diemtb;
    return vao;
}
ostream& operator <<(ostream &ra, sinhvien sv){
    ra<<"Ma sinh vien: "<<sv.msv<<endl;
    ra<<"Ho ten: "<<sv.hoten<<endl;
    ra<<"Lop: "<<sv.lop<<endl;
    ra<<"Nam sinh: "<<sv.namsinh<<endl;
    ra<<"Diem trung binh: "<<sv.diemtb<<endl;
    return ra;
}
float sinhvien::getDiemtb(){
    return diemtb;
}
bool sinhvien::operator >(sinhvien sv){
    if(diemtb>sv.diemtb)
        return true;
    else 
        return false;
}
bool sinhvien::operator <(sinhvien sv){
    if(namsinh>sv.namsinh)
        return true;
    else 
        return false;
}
void nhap(int n, sinhvien a[]){
    for(int i=0; i<n; i++){
        cout <<"Nhap sinh vien thu "<<i+1<<":"<< endl;
        cin>>a[i];
    }
}
void xuat(int n, sinhvien a[]){
    for(int i=0; i<n; i++){
        cout <<"Sinh vien thu"<<i+1<<":"<<endl<<a[i]<<endl;
    }
}
int main(){
    sinhvien a[100];
    int n;
    // cout<<"Nhap sinh vien a: ";
    // cin>>a;
    // cout <<"Thong tin sinh vien a: ";
    // cout << a;
    cout<<"Nhap so sinh vien: ";
    cin>> n;
    nhap(n,a);
    xuat(n,a);
    return 0;
}