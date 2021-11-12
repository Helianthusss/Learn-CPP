#include<iostream>
using namespace std;

class PS{
    private:
        float tu;
        float mau;
    public: 
        PS();
        PS(float tu, float mau);
        ~PS();
        void nhap();
        void in();
        void rutgon();
        PS operator+(PS a, PS b);
        PS operator-(PS a, PS b);
        PS operator*(PS a, PS b);
        PS operator/(PS a, PS b);
};
PS::PS(){
    this->tu =0;
    this->mau =1;
}
PS::PS(float tu,float mau){
    this->tu =tu;
    if (mau != 0) this->mau =mau; 
    else mau=1;
}
PS::~PS(){

}
void PS::nhap(){
        cout<<"\nNhap tu so: ";cin>>tu;
        cout<<"\nNhap mau so: ";cin>>mau;
}
void PS::in(){
    cout<<"\nPhan so: "<<tu<<"/"<<mau;
}
PS PS::operator+(PS a, PS b){
    
}