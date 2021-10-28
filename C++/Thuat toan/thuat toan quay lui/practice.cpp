//2.7                        
#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;

int X[MAX], n, dem=0;

void Init(){ //thiết lập độ dài xâu nhị phân
    cout<<"\n Nhập n="; cin>>n;
}
void Result(void){ //In ra xâu nhị phân X[] = x1, x2,.., xn
    cout<<"\n Kết quả "<<++dem<<":";
    for(int i =1; i<=n; i++)
        cout<<X[i]<<setw(3);
}
void Try(int i){ //thuật toán quay lui
    for (int j=0; j<=1; j++){ //duyệt các khả năng j dành cho xi
        X[i]=j; //thiết lập thành phần xi là j
        if(i==n) //nếu i là thành phần cuối cùng
            Result(); // ta đưa ra kết quả
        else //trong trường hợp khác
            Try(i+1); //ta xác định tiếp thành phần xi+1
    }
}
int main(void){ 
    Init(); 
    Try(1);
}