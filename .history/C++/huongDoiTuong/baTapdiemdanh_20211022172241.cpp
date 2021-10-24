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
        A operator +(A a);
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
            A *a=static_cast<A *>(&b);
            is>>*a;
            cout<<"\nNhap z= ";
            is>>b.z;
            return is;
        }
        friend ostream& operator<<(ostream& os,B &b){
            A *a=static_cast<A *>(&b);
            os<<*a;
            os<<"\nZ= "<<b.z;
            return os;
        }
        bool operator >(B b);
        B operator +(B &b);        
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
    return (this->x > a.x && this->y > a.y) ? true:false;
}
A A::operator +(A a){
    return A(this->x + a.x , this->y + a.y);
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

bool B::operator >(B b){
    A *a1=static_cast<A*>(&b);
    A *a2=static_cast<A*>(this);  
    if(*a1>*a2 && z>b.z) return true;
    else return false;
}
B B::operator +(B &b){
    B t;
    A *a1=static_cast<A*>(&b);
    A *a2=static_cast<A*>(this);  
    A *t1=static_cast<A *>(&t); 
    *t1=*a1+*a2; 
    t.z=z+b.z; 
    return t;
}

int main(){
    B b,b1;  
    cin>>b;
    cout<<b<<endl; 
    cin>>b1;
    cout<<b<<endl;    
    if(b>b1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    cout<<"\nSum: "<<b+b1<<endl;
    return 0;    
}