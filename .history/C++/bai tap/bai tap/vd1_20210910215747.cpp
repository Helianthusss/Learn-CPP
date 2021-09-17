#include<iostream>
using namespace std;

struct ThongTin{
    char name[30];
    int age;
};
void NhapThongTin(ThongTin &a){
   fflush(stdin);//xoa bo dem
    cout<<"\nWhat your name?";
    cin.getline(a.name,30);
    cout<<"\nHow old are you?";
    cin>>a.age;
}
void XuatThongTin(ThongTin a){
    cout <<"\nYour name is:"<<a.name;
    cout <<"\nYou is "<<a.age<<" years old";
}
int main(){
    ThongTin tt;
    NhapThongTin(tt);
    XuatThongTin(tt);
   return 0;
}
