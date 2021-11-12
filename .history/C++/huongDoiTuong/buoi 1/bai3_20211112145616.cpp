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
        friend Mydate operator >=(Mydate& other);
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
