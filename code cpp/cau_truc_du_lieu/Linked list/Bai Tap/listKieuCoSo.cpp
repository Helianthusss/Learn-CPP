#include<iostream>
using namespace std;

struct Node{
	float data;
	Node *pNext;   
};
struct SingleList{
	Node *pHead;
};
void Initialize (SingleList *&list){
	list =new SingleList;
	list->pHead =NULL;

}
Node *CreateNode(float d){
	Node *pNode = new Node;
	if(pNode != NULL){
		pNode->data = d;
		pNode->pNext = NULL;
	}
	else {
		cout << " Cap phat bo nho that bai";
	}
	return pNode;
}                                                
void PrintList(SingleList *list){
	Node *pTmp = list->pHead;
	if(pTmp == NULL){
		cout <<" Danh sach rong";
	}
	while (pTmp != NULL){
		cout << pTmp->data<<" ";
		pTmp = pTmp->pNext;
	}
}
int SizeOfList(SingleList *list) {
	Node *pTmp =list->pHead;
	int nSize = 0;
	while (pTmp != NULL){
		pTmp=pTmp->pNext;
		nSize++;
	}return nSize;
}
void InsertFirst(SingleList *&list, float d){
	Node *pNode=CreateNode(d);
	if (list->pHead == NULL){
		list->pHead = pNode;
	}
	else {
		pNode->pNext=list->pHead;
		list->pHead=pNode;
	}
}
void InsertLast(SingleList *&list, float d){
	Node *pNode=CreateNode(d);
	if (list->pHead == NULL){
		list->pHead = pNode;
	}
	else {
		Node *pTmp=list->pHead;
		While(pTmp->pNext != NULL){
			pTmp=pTmp->pNext;
		}
		pTmp->pNext=pNode;
	}
}
void InsertMid(SingleList *&list,int pos, float d){
    if(pos<0 || pos >= SizeOfList(list)){
		cout << "Not valid position do insert";
		return ;
	} 
	if (pos == 0) InsertFirst(list,d);
	else if (pos == SizeOfList(list)-1)
	    InsertLast(list,d);
	else{
		Node *pNode=CreateNode(d);
		Node *pIns=list->pHead;
		Node *pPre=NULL;
		int i=0;
		while(pIns!=NULL){
			if(i==pos) break;
			pPre=pIns;
			pIns=pIns->pNext;
			i++;
		}
		pPre->pNext=pNode;
		pNode->pNext=pIns;
	}
}
int main(){

	return 0;
}