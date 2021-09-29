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
    Node *Next;
};
struct singleList{
    Node *Head;
    Node *Tail;
};
void  Initialize(singleList &list){
    list = new singleList;
    list->Head =list->Tail =NULL;
}
int SizeOfList(singleList list){
	Node *pTmp=list.Head;
	int Size=0;
	while(pTmp!=NULL){
		pTmp=pTmp->Next;
		Size++;
	}
	return Size;
}
void nhapSinhVien(Item *sv){
	cout<<"\nNhap ma sinh vien: ";
	cin>>sv->ID;
    cin.ignore();	
	cout<<"\nNhap ten sinh vien: ";
	getline(cin,sv->fullName);
	cout<<"\nNhap ngay thang nam sinh: ";
	cin>>sv->day>>sv->month>>sv->year;
    cout<<"\nNhap GPA: ";
	cin>>sv->GPA;
	cout<<"\nNhap lop: ";
	getline(cin,sv->class);
	cout<<"\nNhap nganh: ";
	getline(cin,sv->major);
}
void nhapDanhSach(Item *sv, int soluong){
    cout<<"\nNhap so luong sinh vien: ";
    cin>>soluong;
    for(int i=0; i<soluong; i++){
        cout<<"\nNhap sinh vien thu "<<i+1;
        nhapSinhVien(&*(sv+i));
        InsertLast(list,*(sv+i));
    }
}
void XuatSinhVien(Item *sv){
    cout<<"\nMa sinh vien: "<<sv->ID;
    cout<<"\nTen sinh vien: "<<sv->fullName;
    cout<<"\nNgay thang nam sinh: "<<sv->day<<"/"<<sv->month<<"/"<<sv->year;
    cout<<"\nDiem trung binh: "<<sv->GPA;
    cout<<"\nLop: "<<sv->Class;
    cout<<"\nNganh: "<<sv->major;
}
void xuatDanhSach(Item *sv, int soluong){
    for(int i=0;i<n;i++){
        cout<<"\nXuat sinh vien thu "<<i+1;
        
    }
}
Node *CreateNode(Item *sv){
    Node *pNode= new Node;
    if(pNode != NULL){
        pNode->data=sv;
        pNode->Next=NULL;
    }
    else{
        cout<<"Cap phat bo nho that bai!!!";
    }
    return pNode;
}
void InsertLast(singleList &list, Item sv){
	Node *pNode=CreateNode(sv);
	if(list.Head == NULL){
		list.Head= pNode;
	}
	else {
		Node *pTmp=list.Head;
		while (pTmp->Next != NULL){
			pTmp=pTmp->Next;
		}
		pTmp->Next=pNode;
	}
}
Node *SearchNode(singleList list, Item x){
	Node *pTmp = list.Head;
	while (pTmp != NULL){
		if(pTmp->data== x) break;
		pTmp= pTmp->Next;
	}
	return pTmp;
}
void FindID(singleList &list, Item sv){
    cout<<"\nNhap ma sinh vien can tim: "
    cin>>sv->ID;
    int *d=
    if ()

}
