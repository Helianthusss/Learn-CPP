#include<bits/stdc++.h>
using namespace std;

bool timeTest(int day, int month, int year){
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
    scanf("%d%d%d",&day,&month,&year);
    scanf("%d",&n);
    if(timeTest(day,month,year)==false || year <1995 || year >2012) printf("0");
    else{
        int s=day+n;
        if(month==1 || month ==3 || month == 5 || month ==7 || month ==8 || month ==10){
            if(s <= 31) printf("%02d/%02d/%02d",s,month,year);
            else printf("01/%02d/%02d",month+1,year);
        }
        if(month==12){
            if(s<=31) printf("01/01/%02d",year+1);
            else printf("01/01/%02d",year+1);
        }
        if(month==4 || month ==6 || month == 9 || month ==11){
            if(s <= 30) printf("%02d/%02d/%02d",s,month,year);
            else printf("01/%02d/%02d",month+1,year);
        }
        if(month==2){
            if(year %4 ==0 ){
                if(s <= 29) printf("%02d/%02d/%02d",s,month,year);
                else printf("01/%02d/%02d",month+1,year);
            }  
            else{
                if(s <= 28) printf("%02d/%02d/%02d",s,month,year);
                else printf("01/%02d/%02d",month+1,year);
            }
        }
    }
    return 0;
}