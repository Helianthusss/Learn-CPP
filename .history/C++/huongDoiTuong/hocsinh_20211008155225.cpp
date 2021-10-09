//tran Duc Anh
//MSSV: 6151071034
#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
       string name;
       float mathScore,literatureScore,mediumScore;
    public:
        Student(string name, float literatureScore, float mathScore );
        Student(string name,float literatureScore,float mathScore=0);
        Student(const Student &sv);
        ~Student();
        bool operator >(Student sv);
        bool operator <(Student sv);
        bool operator ==(Student sv);
        bool operator >=(Student sv);
        bool operator <=(Student sv);
        bool operator !=(Student sv);
        bool operator =(Student sv);
        friend istream& operator >>(istream &is, Student &sv);
        friend ostream& operator <<(ostream& os, Student sv);
};
istream& operator >>(istream &is, Student &sv){
    fflush(stdin);
    cout<<"\nNhap ho ten: ";
    getline(is,sv.name);
    cout<<"\nNhap diem toan: ";
    is>>sv.mathScore;
    cout<<"\nNhap diem van: ";
    is>>sv.literatureScore;
    cout<<"\nNhap diem trung binh: ";
    is>>sv.mediumScore;
    return is;
}
ostream& operator <<(ostream& os, Student sv){
    os<<"\nHo ten: "<<sv.name;
    os<<"\nDiem toan: "<<sv.mathScore;
    os<<"\nDiem van: "<<sv.literatureScore;
    os<<"\nDiem trung binh: "<<sv.mediumScore;
    return os;
}
Student::Student(string name, float literatureScore, float mathScore ){
    this->name=name;
    this->literatureScore=literatureScore;
    this->mathScore=mathScore;
}
Student::Student(string name,float literatureScore,float mathScore=0){
    this->name=name;
    this->literatureScore=literatureScore;
    this->mathScore=mathScore;
}
Student::Student(const Student &sv){
    this->sv=sv;
}
Student::~Student(){  

}
bool Student::operator >(Student sv){
    return mediumScore >sv.mediumScore;
}
bool Student::operator <(Student sv){
    return mediumScore <sv.mediumScore;
}
bool Student::operator ==(Student sv){
    return mediumScore ==sv.mediumScore;
}
bool Student::operator >=(Student sv){
    return mediumScore >=sv.mediumScore;
}
bool Student::operator <=(Student sv){
    return mediumScore <=sv.mediumScore;
}
bool Student::operator !=(Student sv){
    return mediumScore !=sv.mediumScore;
}
bool Student::operator =(Student sv){
    return mediumScore =sv.mediumScore;
}
int main(){
    Student sv1,sv2;
    cin>>sv1;
    cout<<sv1;
    cin>>sv2;
    cout<<sv2;
    return 0;
}
