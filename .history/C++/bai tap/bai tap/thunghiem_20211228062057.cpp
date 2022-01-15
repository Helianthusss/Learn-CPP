class A{
protected:
float x;
public:
A(){ x=1.5; }
void funcA() { cout<<"x="<<x; }
};
class B: private A{
float y;
public:
B():A(){ =8.5; }
float funcA() { returm x+y; }
void main(){
B b;
Cout<<b.funcA();}