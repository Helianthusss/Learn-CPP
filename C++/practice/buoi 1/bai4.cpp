// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
//Viết chương trình đổi một số ở hệ thập phân sang hệ nhị phân vận dụng Stack.
#include <iostream>
#define MAX 100
using namespace std;
struct stack{  //dinh nghia cau truc stack
    int n;
    int a[MAX];
};
void init(stack &s){  // ham khoi tao
    s.n=-1;
}
bool isempty (stack s){ // ham kiem tra ngan xep co rong khong
    if(s.n==-1)
        return true;
    return false;
}
bool isfull(stack s) {  // ham kiem tra ngan xep day khong
    return (s.n==MAX-1);
}
void push(stack &s, int x) { // ham them 1 phan tu vao stack
    if (isfull(s))
        cout <<" Ngan xep day !";
    else{
        s.n++;
        s.a[s.n]=x;
    }
}
int pop (stack &s) {  // ham lay mot phan tu khoi stack
    if(isempty(s)){
        cout <<"Ngan xep rong !";
        return -1;
    }else
        return s.a[s.n--];
}
int main(){
    stack s;
    init(s);
    int m,k;
    cout << "Chuong trinh chuyen doi thap phan sang nhi phan!" << endl;
    do{
        cout << "Nhap so thap phan can chuyen: ";
        cin >> m ;
    }while (m<=0);
    while (m!=0){
        k=m%2;
        push(s,k);
        m=m/2;
    }
    cout << "So nhi phan la: ";
    while (isempty(s)==0)
        cout << pop(s);
}