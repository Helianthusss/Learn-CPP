#include <iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"Nhập vào một chuỗi: ";
    cin>>str;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]>=97&&str[i]<=122) str[i]=str[i]-32;
    }
    cout<<"Chuỗi sau khi được chuyển thành chữ hoa là "<<str;
}