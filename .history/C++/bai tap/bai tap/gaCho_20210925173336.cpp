#include<iostream>
using namespace std;

int main(){
    long long xxx, yy;
    cin >>xxx>>yy;
    int i,j;
    for( i=0;i<=yy/2;i++){
        for(j=0;j<=yy/4;j++){
            if(i+j == xxx && 2i+4j==yy){
                cout<<i<<" "<<j;
            }
        }
    }
    return 0;
}