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
        friend bool operator >=(Mydate &a, Mydate &b);
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
bool operator >=(Mydate &a, Mydate &b){
    return (((a.day > b.day) || (a.day = b.day)) && ((a.month > b.month) || (a.month = b.month)) && ((a.year > b.year) || (a.year=b.year)));
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