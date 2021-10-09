//tran Duc Anh
//MSSV: 6151071034
#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
       string name;
       float mathScore,literatureScore;
    public:
        Student();
        Student(string name, float literatureScore, float mathScore );
        Student(string name);
        Student(const Student &sv);
        ~Student();
        float mediumScore();
        bool operator >(Student sv);
        bool operator <(Student sv);
        bool operator ==(Student sv);
        bool operator >=(Student sv);
        bool operator <=(Student sv);
        bool operator !=(Student sv);
        friend istream& operator >>(istream &is, Student &sv);
        friend ostream& operator <<(ostream& os, Student sv);
};
istream& operator >>(istream &is, Student &sv){
    fflush(stdin);
    cout<<"\nName: ";
    getline(is,sv.name);
    cout<<"\nMath score: ";
    is>>sv.mathScore;
    cout<<"\nLiterature score: ";
    is>>sv.literatureScore;
    return is;
}
ostream& operator <<(ostream& os, Student sv){
    os<<"\nName: "<<sv.name;
    os<<"\nMath score: "<<sv.mathScore;
    os<<"\nLiterature score: "<<sv.literatureScore;
    return os;
}
Student::Student(){
    this->name = "";
    this->mathScore = 0;
    this->literatureScore = 0;
}
Student::Student(string name, float literatureScore, float mathScore ){
    this->name=name;
    this->literatureScore=literatureScore;
    this->mathScore=mathScore;
}
Student::Student(string name){
    this->name=name;
    this->literatureScore=0;
    this->mathScore=0;
}

Student::Student(const Student &sv){
    name=sv.name;
    mathScore=sv.mathScore;
    literatureScore=sv.literatureScore;
}
Student::~Student(){  
}
float Student::mediumScore(){
    return (float)((mathScore+literatureScore)/2.0);
}
bool Student::operator >(Student sv){
    return this->mediumScore() >sv.mediumScore();
}
bool Student::operator <(Student sv){
    return this->mediumScore() <sv.mediumScore();
}
bool Student::operator ==(Student sv){
    return this->mediumScore() ==sv.mediumScore();
}
bool Student::operator >=(Student sv){
    return ((this->mediumScore() > sv.mediumScore()) || (this->mediumScore() == sv.mediumScore()));
}
bool Student::operator <=(Student sv){
    return ((this->mediumScore() < sv.mediumScore()) || (this->mediumScore() == sv.mediumScore()));
}
bool Student::operator !=(Student sv){
    return this->mediumScore() !=sv.mediumScore();
}
int main(){
    Student sv1("A",6.8,4.9);
    Student sv2("B",8.3,3.7);
	if(sv1>sv2) cout<<"Bigger"<<endl;
    if(sv1<sv2) cout<<"Smaller"<<endl;
    if(sv1>=sv2) cout<<"Bigger or equal"<<endl;
    if(sv1<=sv2) cout<<"Smaller or equal"<<endl;
    if(sv1==sv2) cout<<"Equal"<<endl;
    if(sv1!=sv2) cout<<"Not equal"<<endl;
    if(sv1==sv2) sv1=sv2; 
    cout<<sv1;
    return 0;
}
