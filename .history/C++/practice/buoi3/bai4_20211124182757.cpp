// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

#include<bits/stdc++.h>
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
void swap(Point &a, Point &b){
    Point temp;
    temp = a;
    a = b;
    b = temp;
}
void QuickSort(Point *a, int left, int right){
    Point x = *(a+((left + right)/2));
    int i = left, j = right;
    do{
        while(length((a+i)) < length(&x)) 
            i++;
        while (length((a+j)) > length(&x))
            j--;
        if(i <= j){
            swap(*(a+i),*(a+j));
            i++;
            j--;
        }
    }while(i < j);
    if(left < j)
        QuickSort(a,left,j);
    if(right > i)
        QuickSort(a,i,right);
}
void find(Point *a, int n, int R){
    cout<<"Cac diem nam trong duong tron tam O ban kinh R: "<<endl;
    for(int i=0;i<n;i++){
        if(length((a+i))<R) print(a+i);
    }
    cout<<endl;
}
void findX(Point *a, int n){
    for(int i=0; i<n-1; i++){
        if(((a+i)->x>0 && (a+i)->y>0) || ((a+i)->x<0 && (a+i)->y>0)){
            for(int j=i+1; j<n; j++){
                if(((a+j)->x>0 && (a+j)->y>0) || ((a+j)->x<0 && (a+j)->y>0)){
                    if((a+i)->y == (a+j)->y){
                        cout<<endl;
                        print((a+i));
                        print((a+j));
                    }
                }
            }
        }
    }
}
void findD(Point *a, int n, int d){
    int count=0;
    for(int i=0;i<n;i++){
        if(length(a+i) == d) {
            print(a+i);
            count++;
        }
    }
    if(count==0) cout<<"khong tim thay diem nao bang "<<d<<endl;
}
int main(){
    int n;
    cout<<"\nNhap so luong diem toa do: ";cin>>n;
    Point *a = new Point[n];
    enterList(a,n);
    QuickSort(a,0,n-1);
    printList(a,n);
    float R;
    cout<<"\nNhap ban kinh: ";   cin>>R;
    find(a,n,R);
    cout<<"\nCac cap diem nam 2 phai ben tren truc hoanh: ";
    findX(a,n);
    float d;
    cout<<"\nNhap khoang cach d: ";cin>>d;
    cout<<"\nCac diem co khoang cach tu goc toa do bang d: ";
    findD(a,n,d);
    delete[] a;
    return 0;
}