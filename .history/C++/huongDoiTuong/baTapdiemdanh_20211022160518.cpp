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
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        friend istream& operator>>(istream& is, A &a, B &b);
        friend ostream& operator<<(ostream& os, A a, B b);
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

        bool operator >(B b);
        bool operator +(B b);        
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
friend istream& operator>>(istream& is, A &a, B &b){
    cout<<"\nNhap x= ";
    is>>a.x;
    cout<<"\nNhap y= ";
    is>>a.x;
    cout<<"\nNhap z= ";
    is>>b.z;
    return is;
}
friend ostream& operator<<(ostream& os, A a, B b){
    os<<"\nX= "<<b.getX();
    os<<"\nY= "<<b.getY();
    os<<"\nZ= "<<b.z;
    return os;
}
bool B::operator >(B b){

}
bool B::operator +(B b){
    
}
int main(){
    B b;  
    cin>>b;
    cout<<b;
    return 0;    
}