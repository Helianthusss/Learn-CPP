// Trần Đức Anh MSSV: 6151071034 
#include<iostream>
using namespace std;
 
class MyDate{
    private:
        int day,month,year;
    public:
        MyDate();
        ~MyDate();
        void nhap();
        void in();
        friend bool operator >=(MyDate &a, MyDate &b);
};
MyDate::MyDate(){
    this->day =0;
    this->month =0;
    this->year =0;
}
MyDate::~MyDate(){}
void MyDate::nhap(){
    cout<<"\nNhap ngay: ";cin>>day;
    cout<<"\nNhap thang: ";cin>>month;
    cout<<"\nNhap nam: ";cin>>year;
}
void MyDate::in(){
    cout<<endl<<day<<"-"<<month<<"-"<<year;
}
bool operator >=(MyDate &a, MyDate &b){
    if(a.year >b.year) return true;
    else if(a.year == b.year) {
        if(a.month >b.month) return true;
        else if(a.month == b.month) {
            if(a.day >b.day) return true;
            if(a.day == b.day) return true;
        }
    }
    return false;
}
int main(){
    MyDate a[5];
    for(int i=0; i<5; i++){
        a[i].nhap();
    }
    for(int i=0; i<5; i++){
        a[i].in();
    }
    MyDate b;
    for(int i=0; i<5;i++){
        if(a[i] >= b){
            b = a[i];
        }
    }
    cout<<endl<<"Ngay lon nhat: ";
    b.in();
    return 0;
}