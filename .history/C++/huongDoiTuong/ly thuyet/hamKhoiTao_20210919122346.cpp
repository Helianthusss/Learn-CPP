#include<iostream>
using namespace std;
class PhanSo{
    private:
       int TuSo,MauSo;
    public:
       PhanSo(){
           TuSo=0;
           MauSo=1;
       }
       PhanSo(int tu, int mau){
           TuSo=0;
           MauSo=mau;
       }
};
int main(){
    PhanSo ps;
    return 0;
}