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
        float UCLN(float a, float b);
        void rutgon();
        PS operator+(PS &a);
        PS operator-(PS &a);
        PS operator*(PS &a);
        PS operator/(PS &a);
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
float PS::UCLN(float a, float b) { 
    if (a==0 ||b==0) return a+b;
    while (a !=b) { 
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
void PS::rutgon(){
    float iUCLN = UCLN(tu, mau);
    tu = tu / iUCLN;
    mau = mau / iUCLN;
}
PS PS::operator+(PS &a){
    return PS((tu*a.mau) + (mau*a.tu),mau*a.mau).rutgon();
}