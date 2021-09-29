#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b,c,S=0;
    cin>>a;
    cin>>b;
    cin>>c;
    if( a<b+c && b<a+c && c<a+b ){
        S=(1/4)*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
            printf("tam giac vuong, dien tich = %.1f",S);
        }     
        else if(a==b && b==c)
            cout<<"tam giac deu, dien tich ="<< S;
        else if(a==b || a==c || b==c)
            cout<<"tam giac can, dien tich ="<< S;
        else
            cout<<"tam giac thuong, dien tich ="<< S;
    }
    else
        cout<<"Khong phai tam giac";
    return 0;    
}