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
void NhapSinhVien(){
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
    
}
