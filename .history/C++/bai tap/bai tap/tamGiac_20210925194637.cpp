#include<bits/stdc++.h>
using namespace std;

int main(){
    float a,b,c,S;
    cin>>a;
    cin>>b;
    cin>>c;
    if( a<b+c && b<a+c && c<a+b ){
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
            cout<<"tam giac vuong, dien tich = "<<(1/4)*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        }     
        else if(a==b && b==c)
            cout<<"Day la tam giac deu, dien tich ="<<(1/4)*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        else if(a==b || a==c || b==c)
            cout<<"Day la tam giac can, dien tich ="<<(1/4)*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
        else
            cout<<"Day la tam giac thuong, dien tich ="<<(1/4)*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
    }
    else
        cout<<"Khong phai tam giac";
    return 0;    
}