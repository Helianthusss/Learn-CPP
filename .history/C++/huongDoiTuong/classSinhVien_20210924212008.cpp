// Tran Duc Anh MSSV: 6151071034
#include<iostream>
using namespace std;

class Student{
   private:
      string name;
      float mathPoint;
      float literaturePoint;
    public:
       void nhap();
       void nhap(string name, float mathPoint, float literaturePoint);
       void xuat();
       string getName();
       float getMathPoint();
       float getLiteralPoint();
       void setName(string newName);
       void setMathPoint(float newMathPoint);
       void setLiteralPoint(float newiteralPoint);
       float mediumScore();
       void classification();
};
void Student::nhap(){
    fflush(stdin);
    cout<<"\nNhap ten hoc sinh: ";
    getline(cin,name);
    cout<<"\nNhap diem toan: ";
    cin>>mathPoint;
    cout<<"\nNhap diem van: ";
    cin>>literaturePoint;
}
void Student::nhap(string name, float mathPoint, float literaturePoint){
    fflush(stdin);
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
void Student::setName(string name){
    this->name =name;
}
void Student::setMathPoint(float mathPoint){
    this->mathPoint=mathPoint;
}
void Student::setLiteralPoint(float literalPoint){
    this->literaturePoint=literalPoint;
}
float Student::mediumScore(){
    float medium;
    medium=(mathPoint+literaturePoint)/2;
    return medium;
}
void Student::classification(){
    if(this->mediumScore() >=8.0) cout<<"\n hoc sinh gioi";
    else if( this->mediumScore() >=7.0) cout<<"\n hoc sinh kha";
    else if( this->mediumScore() >= 5.0) cout <<"\n hoc sinh trung binh";
    else cout <<"\n hoc sinh yeu";
}
int main(){
    Student a;
    a.nhap();
    a.xuat();
    cout<<"\nLay ho ten: "<<a.getName();
    cout<<"\nLay diem toan: "<<a.getMathPoint();
    cout<<"\nLay diem van: "<<a.getLiteralPoint();
    cout<<"\nDiem trung binh la:"<<a.mediumScore();
    a.classification();
    cout<<endl;
    
    string name;
    float mathPoint,literalPoint;
    a.nhap();
    a.setName(name);
    a.setMathPoint(mathPoint);
    a.setLiteralPoint(literalPoint);
    a.xuat();
    return 0;
}