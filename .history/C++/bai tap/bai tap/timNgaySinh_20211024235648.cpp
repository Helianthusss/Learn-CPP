#include<iostream>
using namespace std;

bool timeTest(int day, int month, int year){//hàm ngoài
    if (year<0 || month<0 || month> 12 || day<0 || day> 31) return false;
    if(month==1 || month ==3 || month == 5 || month ==7 || month ==8 || month ==10 || month==12){
        if(day <= 31) return true;
    }
    if(month==4 || month ==6 || month == 9 || month ==11){
        if(day <= 30) return true;
    }  
    if(year %4 ==0 && year !=0){
        if(day <= 29) return true;
    }  
    else{
        if(day <= 28) return true;
    }
    return false;
}
int main(){
    int day,month,year,n;
    cin>>day>>month>>year;
    cin>>n;
    if(timeTest(day,month,year)==false) cout<<"0";
    int s=day+n;
    if(month==1 || month ==3 || month == 5 || month ==7 || month ==8 || month ==10){
        if(s > 31) cout<<"01/"<<month+1<<"/ "<<year;
        else cout<<s<<"/"<<month<< "/" <<year;
    }
    if(month==12){
        if(s>31) cout<<"01/"<<" 01/ "<<year+1;
        else cout<<s<<"/"<<month<< "/" <<year;
    }
    if(month==4 || month ==6 || month == 9 || month ==11){
        if(s > 30) cout<<"01/"<<month+1<<"/ "<<year;
        else cout<<s<<"/"<<month<< "/" <<year;
    }
    if(month==2){
        if(year %4 ==0 && year !=0){
            if(s <= 29) cout<<"01/"<<month+1<<"/ "<<year;
            else cout<<s<<"/"<<month<< "/" <<year;
        }  
        else{
            if(s <= 28) cout<<"01/"<<month+1<<"/ "<<year;
            else cout<<s<<"/"<<month<< "/" <<year;
        }
    }
    return 0;
}