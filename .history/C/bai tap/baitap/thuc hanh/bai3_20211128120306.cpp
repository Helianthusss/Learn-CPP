
#include<stdio.h>
#include<math.h>
using namespace std;
struct Point{
    float x, y;
};
void enter(Point *a){
    cout<<"\nNhap hoanh do: ";cin>>a->x;
    cout<<"\nNhap tung do: ";cin>>a->y;
}
void enterList(Point *a, int n){
    for(int i=0;i<n;i++){
        cout<<"Nhap diem thu "<<i+1<<":"<<endl;
        enter(&*(a+i));
    }
}
void print(Point *a){
    cout<<"("<<a->x<<","<<a->y<<")"<<"; ";
}
void printList(Point *a, int n){
    for(int i=0; i<n;i++){
        print((a+i));
    }
    cout<<endl;
}
float length(Point *a){
    return sqrt(pow(a->x,2)+pow(a->y,2));
} 