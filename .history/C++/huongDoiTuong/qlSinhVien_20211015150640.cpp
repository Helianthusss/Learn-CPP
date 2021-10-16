#include<iostream>
using namespace std;

class Person{
    protected:
       string name;
       int age;
       string address;
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
    cout<<"\nName: "<<name<<"\t"<<"Age: "<<age<<"\t"<<"Address: "<<address<<"\t"<<"Score: "<<score;
}
void Student::rank(){
    
}
int main(){
    Student sv;
    sv.input();
    sv.output();
    return 0;
}