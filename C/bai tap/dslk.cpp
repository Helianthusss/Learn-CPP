#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *pNext;
};
struct singleList{
	Node *pHead;
};
void Initialize(singleList &list){
	list.pHead = NULL;
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
		cout<< pTmp->data<<" ";
		pTmp=pTmp->pNext;
	}
}
// chèn node 
void push(singleList &list, int d){
        Node* pNode = CreateNode(d);
        pNode->pNext=list.pHead;
		list.pHead=pNode;
}
void sortedInsert(singleList &list, int x){
    Node *pNode = CreateNode(x);   
    Node *pPre = NULL;
	Node *pIns=list.pHead;
        while(pIns!=NULL && x>pIns->data){ 
            pPre=pIns;
            pIns=pIns->pNext;
        }
        pNode->pNext = pIns;
        if(pPre==NULL){
            list.pHead = pNode;
        }else{
            pPre->pNext = pNode;
        }
}
void reverse(singleList &list){
        Node* pIns = list.pHead;
        Node *pPre = NULL, *pNext = NULL;
 
        while (pIns != NULL) {
            pNext = pIns->pNext;
            pIns->pNext = pPre;
            pPre = pIns;
            pIns = pNext;
        }
        list.pHead = pPre;
}
int main(){
	singleList list;
	push(list,7);
	push(list,5);
    push(list,4);
    sortedInsert(list,6);
    reverse(list);
	PrintList(list);
	
}
