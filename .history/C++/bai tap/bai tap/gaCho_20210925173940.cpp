#include<iostream>
using namespace std;

int main(){
    long long xxx, yy;
    cin >>xxx>>yy;
    long long  i,j;
    for( i=0;i<=yy/2;i++){
        for(j=0;j<=yy/4;j++){
            if((i+j) == xxx && (2*i+4*j)==yy){
                cout <<i<<" "<<j;
            }
        }
    }
    return 0;
}