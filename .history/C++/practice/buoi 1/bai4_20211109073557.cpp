#include <iostream>
#define MAX 100
using namespace std;
struct stack{  
    int n;
    int a[MAX];
};
void init(stack &s){ 
    s.n=-1;
}
bool isempty (stack s){
    if(s.n==-1)
        return true;
    return false;
}
bool isfull(stack s) {
    return (s.n==MAX-1);
}
void push(stack &s, int x) {
    if (isfull(s))
        cout <<" Ngan xep day !";
    else{
        s.n++;
        s.a[s.n]=x;
    }
}
int pop (stack &s) {
    if(isempty(s)){
        cout <<"Ngan xep rong !";
        return -1;
    }else
        return s.a[s.n--];
}
int main()
{
    stack s;
    init(s);
    int m,k;
    cout << "Chuong trinh chuyen doi thap phan sang nhi phan!" << endl;
    do
    {
        cout << "Nhap so thap phan can chuyen: ";
        cin >> m ;
    }
    while (m<=0);
    while (m!=0)
    {
        k=m%2;
        push(s,k);
        m=m/2;
    }
    cout << "So nhi phan la: ";
    while (isempty(s)==0)
        cout << pop(s);
}