#include<iostream>
using namespace std;

struct ThongTin{
    char name[30];
    int age;
};
void NhapThongTin(ThongTin a){
    fflush(stdin);
    cout<<"\nWhat your name?";
    cin.getline(a.name,30);
    cout<<"\nHow old are you?";
    cin>>a.age;
}
int main(){
    ThongTin tt;
    NhapThongTin(tt);
   return 0;
}
// tran duc anh