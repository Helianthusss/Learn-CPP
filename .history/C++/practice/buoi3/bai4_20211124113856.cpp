// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

#include<bits/stdc++.h>
using namespace std;

struct ToaDo{
    float x, y;
};
void nhap(ToaDo *a){
    cout<<"\nNhap hoanh do: ";cin>>a->x;
    cout<<"\nNhap tung do: ";cin>>a->y;
}
void nhapDanhSachToaDo(ToaDo *a,int &n){
    cout<<"\nNhap so diem toa do: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nNhap toa do thu "<<i+1<<":";
        nhap(&*(a+i));
    }
}
float tinhDoDai(ToaDo *a){
    return sqrt(pow(a->x,2)+pow(a->y,2));
}
void sapXep(ToaDo *a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a->tinhdodai(&*(a+j))>a->tinhdodai(&*(a+j+1))){
                swap(a->tinhdodai(&*(a+j)),a->tinhdodai(&*(a+j+1)));
            }
        }
    }
}
tinhdodai(&*(a+j))
int main(){
    int n;
    ToaDo *a=new ToaDo[n];
    nhapDanhSachToaDo(a,n);
    delete[] a;
    return 0;
}