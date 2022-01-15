#include<iostream>
using namespace std;
class A{
float x;
public: A(){ x=1.5; }
void funcA() { cout<<x; }
class B: private A{
float y;
public:
B(): A(){ y=2.5; }
void funcA() ( A:funcA(); cout<<y; }
int main(){
B*dt2=new B;
dt2->funcA();
}
