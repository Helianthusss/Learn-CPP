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
       void setName(string newName);
       void setMathPoint(float newMathPoint);
       void setLiteralPoint(float newiteralPoint);
       Student mediumScore(float medium);
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
string Student::getName(){
    return name;
}
float Student::getMathPoint(){
    return mathPoint;
}
float Student::getLiteralPoint(){
    return literaturePoint;
}
void Student::setName(string newName){
    name=newName;
}
void Student::setMathPoint(float newMathPoint){
    mathPoint=newMathPoint;
}
void Student::setLiteralPoint(float newLiteralPoint){
    literaturePoint=newLiteralPoint;
}
Student Student::mediumScore(float medium){
    medium=(mathPoint+literaturePoint)/2;
    return medium;
}
Student classification();
int main(){
    Student a;
    a.nhap();
    a.xuat();
    return 0;
}