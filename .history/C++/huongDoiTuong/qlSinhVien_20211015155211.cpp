#include<iostream>
using namespace std;

class Person{
    private:
       string name;
       int age;
       string address;
    public:
        void input1();
        void output1(); 
        string getName();  
};
class Student:public Person{
    private:
        string id;
        float score;
    public:
        void input2();
        void output2();
        void rank();
};
class Teacher:public Person{
    public:
       void teach();
};
void Person::input1(){
    fflush(stdin);
    cout<<"\nName: ";
    getline(cin,name);
    cout<<"\nAge: ";
    cin>>age;
    fflush(stdin);
    cout<<"\nAddress: ";
    getline(cin,address);   
}
void Person::output1(){
    cout<<"\nName: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<address<<endl;
}
string Person::getName(){
    return name;
}

void Teacher::teach(){
    if(this->getName()=='Co Dung') cout<<"\nCVHT K62";
    else if(this->getName()=='Thay Nha') cout<<"\nCVHT K59";
    if(this->getName()=='Co Mien') cout<<"\nCVHT K61";
    if(this->getName()=='Thay Minh') cout<<"\nCVHT K60";
}
void Student::input2(){
    fflush(stdin);
    cout<<"\nId: ";
    getline(cin,id);
    cout<<"\nScore: ";
    cin>>score;
}
void Student::output2(){
    cout<<"\nID: "<<id<<endl<<"Score: "<<score<<endl;
}
void Student::rank(){
    if(score >=8) cout<<"\ngioi";
    else if(score >= 6 && score<8) cout<<"\nkha";
    else cout<<"\ntrung binh";
}
int main(){
    Student sv;
    sv.input1();
    sv.input2();
    return 0;
}