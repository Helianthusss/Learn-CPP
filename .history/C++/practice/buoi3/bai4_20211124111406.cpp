// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

#include<iostream>
using namespace std;

struct ToaDo{
    float x, y;
};
void nhap(ToaDo a){
    cout<<"\nNhap hoanh do: ";cin>>a.x;
    cout<<"\nNhap tung do: ";cin>>a.y;
}
void nhapDanhSachToaDo(ToaDo a[],int &soluong){
    cout<<"\nNhap so diem toa do: "cin>>soluong;
    for(int i=0;i<soluong;i++){
        cout<<"\nNhap toa do thu "<<i+1<<":";
        nhap(a[i]);
    }
}
int main(){
    int a[100],soluong;
    nhapDanhSach(a,soluong);
    return 0;
}