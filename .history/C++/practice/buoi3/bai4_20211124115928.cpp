// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

#include<bits/stdc++.h>
using namespace std;

struct ToaDo{
    float x, y;
};
void enter(ToaDo *a){
    cout<<"\nNhap hoanh do: ";cin>>a->x;
    cout<<"\nNhap tung do: ";cin>>a->y;
}
void enterList(ToaDo *a,int &n){
    cout<<"\nNhap so diem toa do: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nNhap toa do thu "<<i+1<<":";
        enter(&*(a+i));
    }
}
float length(ToaDo *a){
    return sqrt(pow(a->x,2)+pow(a->y,2));
}
void sort(ToaDo *a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(length((a+j)) > length((a+j+1))){
                swap(*(a+j),*(a+j+1));
            }
        }
    }
}
void findX
int main(){
    int n;
    ToaDo *a=new ToaDo[n];
    enterList(a,n);
    delete[] a;
    return 0;
}