#include<iostream>
using namespace std;

class Mydate{
    private:
        int day,month,year;
    public:
        Mydate();
        Mydate(int day,int month,int year);
        ~Mydate();
        void nhap();
        void in();
        friend bool operator >=(Mydate &other);
};
Mydate::Mydate(){
    this->day =0;
    this->month =0;
    this->year =0;
}
Mydate::Mydate(int day,int month,int year){
    this->day = day;
    this->month = month;
    this->year = year;
}
Mydate::~Mydate(){

}
void Mydate::nhap(){
    cout<<"\nNhap ngay: ";cin>>day;
    cout<<"\nNhap thang: ";cin>>month;
    cout<<"\nNhap nam: ";cin>>year;
}
void Mydate::in(){
    cout<<"\nMy date la: "<<day<<"-"<<month<<"-"<<year;
}
bool operator >=(Mydate &other){
    return (((this->day > other.day) || (this->day = other.day)) && ((this->month > other.month) || (this->month = other.month)) && ((this->year > other.year) || (this->year=other.year)));
}
int main(){
    Mydate a[5];
    for(int i=0; i<5; i++){
        a[i].nhap();
    }
    for(int i=0; i<5;i++){
        if(a[i] >=a[i+1]) cout<<"ban trau nhat ok";
    }
    return 0;
}