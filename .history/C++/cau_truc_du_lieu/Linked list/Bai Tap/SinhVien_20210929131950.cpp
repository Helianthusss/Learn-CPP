#include<bits/stdc++.h>
#define SinhVien Item
using namespace std;

struct SinhVien{
    int ID;
    string fullName;
    int day,month,year;
    float GPA;
    string Class;
    string major;// nganh
};
struct Node{
    Item *data;
    Node *next;
};
struct singleList{
    Node *head;
    Node *tail;
};
void  Initialize(singleList &list){
    list = new singleList;
    list->head =list->tail =NULL;
}
Item NhapSinhVien(){
    Item *sv=new Item;
	cout<<endl<<"\nNhap ma sinh vien: ";
	cin>>sv->ID;
    cin.ignore();	
	cout<<"\nNhap ten sinh vien: ";
	getline(cin,sv->hoten);
	cout<<"\nNhap ngay thang nam sinh: ";
	cin>>sv->day>>sv->month>>sv->year;
    cout<<endl<<"Nhap GPA: ";
	cin>>sv->GPA;
	cout<<endl<<"Nhap lop: ";
	getline(cin,sv->lop);
	cout<<endl<<"Nhap nganh: ";
	getline(cin,sv->nganh);
}
