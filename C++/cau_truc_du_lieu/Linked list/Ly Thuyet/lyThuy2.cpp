#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *pNext;
};
struct singleList{
	Node *pHead;
	Node * pTail;
};
void Initialize(singleList &list){
	list.pHead = list.pTail =NULL;
}
// tao node
Node *CreateNode( int d){
	Node *pNode = new Node;
	if(pNode != NULL){
		pNode->data=d;
		pNode->pNext=NULL;
	}
	else{
		cout<<"Cap phat bo nho that bai";
	}
	return pNode;
}
// in ra danh sach lien ket
void PrintList(singleList list){
	Node *pTmp=list.pHead;
	if(pTmp==NULL){
		cout<<"The list is empty!";
		return;
	}
	while(pTmp!= NULL){
		cout<<pTmp->data<<" ";
		pTmp=pTmp->pNext;
	}
}
int SizeOfList(singleList list){
	Node *pTmp=list.pHead;
	int nSize=0;
	while(pTmp!=NULL){
		nSize++;
		pTmp=pTmp->pNext;
	}
	return nSize;
}
// chèn node 
void InsertFirst(singleList &list, int d){
	Node *pNode = CreateNode(d);
	if(list.pHead == NULL){
		list.pHead=list.pTail=pNode;
	}
	else{
		pNode->pNext=list.pHead;
		list.pHead=pNode;
	}
}
int main(){
	singleList list;
	InsertFirst(list,5);
	InsertFirst(list,7);
	PrintList(list);
	
}