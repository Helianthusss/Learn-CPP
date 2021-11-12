#include<iostream>
using namespace std;

class Complex{
    private:
        float a,b;//a thực b ảo
    public:
        Complex();
        Complex(float a,float b);
        ~Complex();
        void nhap();
        void in();
        friend Complex operator +(Complex &a,Complex &b);
        friend Complex operator -(Complex &a,Complex &b);
};
Complex::Complex(){
    this->a=0;
    this->b=0;
}
Complex::Complex(float a,float b){
    this->a=a;
    this->b=b;
}
Complex::~Complex(){

}
void Complex::nhap(){
    cout<<"\nNhap phan thuc: ";cin>>a;
    cout<<"\nNhap phan ao: ";
    cin>>b;
}
void Complex::in(){
    cout<<"\nSo phuc: "<<a<<"+"<<b<<"t";
}
Complex operator+(Complex &a,Complex &b){
    Complex c;
    c.a=a.a+b.a;
    c.b=a.b+b.b;
    return c;
}
Complex operator-(Complex &a,Complex &b){
    Complex c;
    c.a=a.a-b.a;
    c.b=a.b-b.b;
    return c;
}
int main(){
    Complex a,b;
    a.nhap();
    a.in();
    b.nhap();
    b.in();
    cout<<"\nCong 2 so phuc: ";
    (a+b).in();
    cout<<"\nTru 2 so phuc: ";
    (a-b).in();
    return 0;
}