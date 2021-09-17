#include<iostream>
#include<string>
using namespace std;
union test{
    int a;
    char b[10];
};
int main(){
    test x;
    x.a =10;
    strcpy(x.b,'A');
    cout << x.a << endl;
    cout <<x.b << endl;
    return 0;
}