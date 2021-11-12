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
        friend bool operator >(MyDate &a, MyDate &b);
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
bool operator >(MyDate &a, MyDate &b){
    if(a.year >b.year) return true;
    else if(a.year == b.year) {
        if(a.month >b.month) return true;
        else if(a.month == b.month) {
            if(a.day >b.day) return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"\nNhap so luong phan tu: ";cin>>n;
    MyDate a[n];
    for(int i=0; i<n; i++){
        a[i].nhap();
    }
    for(int i=0; i<n; i++){
        a[i].in();
    }
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    cout<<"Ngay sap xep tang dan: "<<endl;
    for(int i=0; i<n; i++){
        a[i].in();
    }
    return 0;
}