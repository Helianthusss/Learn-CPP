#include<iostream>
using namespace std;

class Person{
    protected:
       string name;
       int age;
       string address;
       string id;
};
class Student:public Person{
    private:
        float score;
    public:
        void input();
        void output();
        void rank();
};
void Student::input(){
    fflush(stdin);
    cout<<"\nId: ";
    getline(cin,id);
    fflush(stdin);
    cout<<"\nName: ";
    getline(cin,name);
    cout<<"\nAge: ";
    cin>>age;
    fflush(stdin);
    cout<<"\nAddress: ";
    getline(cin,address);
    cout<<"\nScore: ";
    cin>>score;
}
void Student::output(){
    cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<address<<endl<<"Score: "<<score;
}
void Student::rank(){
    if(score >=8) cout<<"\ngioi";
    else if(score >= 6 && score<8) cout<<"\nkha";
    else cout<<"\ntrung binh";
}
int main(){
    Student sv;
    sv.input();
    sv.output();
    sv.rank();
    return 0;
}