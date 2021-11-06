#include<iostream>
#include<string>
using namespace std;
struct CongNhan{
    string Ten;
    int NamSinh;
    float SoGioLam;
};
void Nhap(CongNhan *cn, int n){
    for(int i=0;i<n;i++)
	{
		cout<<"\t--Nhap vao thong tin cong nhan thu "<<i+1<<"--\n";
        cout<<"Nhap ten: ";
        fflush(stdin);
        getline(cin,cn[i].Ten);
        cout<<"Nhap nam sinh: ";
        cin>>cn[i].NamSinh;
        cout<<"Nhap so gio lam:";
        cin>>cn[i].SoGioLam;
	}
}
int main(){
    int n;
    cout<<"Nhap so cong nhan: ";
    cin>>n;
    CongNhan *cn;
    cn=new CongNhan[n];
    Nhap(cn, n);
}