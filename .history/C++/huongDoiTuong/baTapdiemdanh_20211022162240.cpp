#include<iostream>
using namespace std;

class A{
    private:
       int x,y;
    public:
        A();
        A(int x,int y);
        A(const A &other);
        ~A();  
        friend istream& operator>>(istream& is, A &a){
            cout<<"\nNhap x= ";
            is>>a.x;
            cout<<"\nNhap y= ";
            is>>a.y;
            return is;
        }
        friend ostream& operator<<(ostream& os, A a){
            os<<"\nX= "<<a.x;
            os<<"\nY= "<<a.y;
            return os;
        }
        bool operator >(A a);
        bool operator +(A a);
};
class B: public A {
    private:
       int z;
    public:
        B();   
        B(int z);
        B(const B &other);
        ~B();  
        friend istream& operator>>(istream& is, B &b){
            cout<<"\nNhap z= ";
            is>>b.z;
            return is;
        }
        friend ostream& operator<<(ostream& os,B b){
            os<<"\nZ= "<<b.z;
            return os;
        }
        B operator >(B b);
        B operator +(B b);        
};
A::A(){
    this->x=0;
    this->y=0;
}
A::A(int x, int y){
    this->x=x; 
    this->y=y;
}
A::A(const A &other){
    x=other.x; 
    y=other.y;
}
A::~A(){

}
bool A::operator >(A a){
    return (this->x > a.x && this->y > a.y);
}
bool A::operator +(A a){
    return (this->x + a.x && this->y + a.y);
}
B::B(){
    this->z=0;     
}
B::B(int z){
    this->z=z;
}
B::B(const B &other){
    z=other.z;
}
B::~B(){

}

B B::operator >(B b){
    A::operator>(b);
    return *this;
}
B B::operator +(B b){
    A::operator+(b);
    z=z+b.z;
    return *this;    
}
int main(){
    A a;
    B b;
    cin>>a;  
    cin>>b;
    cout<<a;
    cout<<b;
    A a1;
    B b1;
    cin>>a1; 
    cin>>b1;
    if(b>b1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    cout<<a+a1;
    cout<<b+b1<<endl;
    return 0;    
}