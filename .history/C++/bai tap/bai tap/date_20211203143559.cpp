#include<iostream>
using namespace std;
#include<ctime>
int main(){
    int ns,namhientai;
    cout<<"Moi ban nhap nam sinh cua minh";cin>>ns;
    time_t t=time(0);
    struct tm *POs=localtime(&t); 
    namhientai=POs->tm_year+1900;
    int tuoi=namhientai-ns;
    cout<<"Ban "<<tuoi<<"Tuoi";
    system("pause");
    return 0;
}