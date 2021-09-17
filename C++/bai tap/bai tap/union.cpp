#include<iostream>
#include<cstring>
using namespace std;
union test{
    int a;
    char b[10];
};
int main(){
    test x;
    
    strcpy(x.b,"A");
    x.a =10;
    cout << x.a << endl;
    cout <<x.b << endl;
    return 0;
}