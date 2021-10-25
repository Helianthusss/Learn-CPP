#include<iostream>
using namespace std;

class Nguoi{
    private:
        int cmt;
        string name;
        int age;
    public:
        Nguoi(int cmt,string name,int age);
        ~Nguoi();
        friend istream& operator>>(istream& is, Nguoi& n);
        friend ostream& operator<<(ostream& os, Nguoi n){
            os<<"\nSo chung minh nhan dan: "<<n.cmt;
            os<<"\nTen: "<<n.name;
            os<<"\nTuoi: "<<n.age;
            return os;
        }   
        bool operator ==(Nguoi n);     
};
Nguoi::Nguoi(int cmt,string name,int age){
    this->cmt=cmt;
    this->name=name;
    this->age=age;
}
Nguoi::~Nguoi(){

}
friend istream& operator>>(istream& is, Nguoi& n){
    cout<<"Nhap so chung minh nhan dan: ";
    is>>n.cmt;
    cout<<"\nNhap ten: ";
    getline(is,n.name);
    cout<<"\nNhap tuoi: ";
    is>>n.age;
    return is;
}

void nhapDanhSach(Nguoi a[],int soluong){

    for(int i=0;i<soluong; i++){
        cin>>a[i];
    }
}
int main(){
    Nguoi a[100];
    int soluong;
    cout<<"\nNhap so luong: ";
    cin>>soluong;
    nhapDanhSach(a,soluong);
}