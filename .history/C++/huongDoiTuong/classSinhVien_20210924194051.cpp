#include<iostream>
using namespace std;

class Student{
   private:
      string name;
      float mathPoint;
      float literaturePoint;
    public:
       void nhap();
       void xuat();
       string getName();
       float getMathPoint();
       float getLiteralPoint();
       void setName();
       void setMathPoint();
       void setLiteralPoint();
       Student mediumScore();
       Student classification();
};
void Student::nhap(){
    cout<<"\nNhap ten hoc sinh: ";
    getline(cin,name);
    cout<<"\nNhap diem toan: ";
    cin>>mathPoint;
    cout<<"\nNhap diem van: ";
    cin>>literaturePoint;
}
void Student::xuat(){
    cout<<"\nTen hoc sinh: "<<name;
    cout<<"\nDiem toan: "<<mathPoint;
    cout<<"\nDiem van: "<<literaturePoint;
}
int main(){
    Student a;
    a.nhap();
    a.xuat();
    return 0;
}