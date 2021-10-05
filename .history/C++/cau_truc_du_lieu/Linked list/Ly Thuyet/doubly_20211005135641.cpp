#include<iostream>
using namespace std;

struct DNode{
    int data;
    DNode *pNext;
    DNode *pPrevious;
};
struct DoubleList{
    DNode *pHead;
    DNode *pTail;
};
DNode* CreateNode(int d){
    DNode *pDNode=new DNode;
    if(pDNode != NULL){
        pDNode->data=d;
        pDNode->pNext=NULL;
        pDNode->pPrevious=NULL;
    }
    else cout<<" cap phat bo nho that bai";
    return pDNode;
}
void Initialize(DoubleList &list){
    list.pHead = list.pTail =NULL;
}
void PrintList(DoubleList list){
    DNode *pTmp = list.pHead;
    if(pTmp == NULL) {
        cout<<"Danh sach rong";
        return;
    }
    while(pTmp != NULL){
        cout<<pTmp->data<<" ";
        pTmp = pTmp->pNext;
    }
}
int SizeOfList(DoubleList list){
    DNode *pTmp = list.pHead;
    int nSize = 0;
    while(pTmp != NULL){
        pTmp = pTmp->pNext;
        nSize++;
    } return nSize;
}
void insertFirst(DoubleList &list, int d){
    DNode *pDNode= CreateNode(d);
    if(list.pHead == NULL) list.pHead = list.pTail=pDNode; 
    else{
        pDNode->pNext = list.pHead;
        list.pHead->pPrevious=pDNode;
        list.pHead = pDNode;
    }
}
int main(){
    DoubleList list;
    Initialize(list);
    insertFirst(list,9);
    insertFirst(list,7);
    insertFirst(list,4);
    cout<<"Danh sach lien ket doi la: ";
    PrintList(list);
    return 0; 
}