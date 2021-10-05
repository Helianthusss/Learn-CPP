#include<bits/stdc++.h>
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
void insertLast(DoubleList &list, int d){
    DNode *pDNode= CreateNode(d);
    if(list.pTail == NULL) list.pHead = list.pTail=pDNode; 
    else{
        list.pTail->pNext = pDNode; 
        pDNode->pPrevious=list.pTail;
        list.pTail = pDNode;
    }
}
void insertMid(DoubleList &list,int pos, int d){
    if(pos <0 || pos>=SizeOfList(list)){
        cout<<"Nhap sai vi tri";
        return;
    }
    if(pos==0)  insertFirst(list,d);
    else if(pos == SizeOfList(list)-1) insertLast(list,d);
    else{
        DNode *pDNode=CreateNode(d);
        DNode *pIns=list.pHead;
        DNode *pPre = NULL;
        int i=0;
        while(pIns!=NULL){
            if(i==pos) break;
            pPre=pIns;
            pIns=pIns->pNext;
            i++;
        }
        pDNode->pNext=pIns;
        pDNode->pPrevious=pPre;
        pPre->pNext=pDNode;
        pIns->pPrevious=pDNode;
    }
}
void removeNode(DoubleList &list, int d){
    DNode *pDel=list.pHead;
    if(pDel == NULL){
        cout <<"Danh sach rong";
        return ;
    }
    DNode *pPre =NULL;
    while(pDel !=NULL){
        if(pDel->data==d) break;
        pPre=pDel;
        pDel=pDel->pNext;
    }
    if(pDel == NULL){
        cout<<"Tim khong thay so can xoa";
    }
    else{
        if(pDel==list.pHead){
            list.pHead=list.pHead->pNext;
            pDel->pNext=NULL;
            if(list.pHead != NULL){
                list.pHead->pPrevious=NULL;
            }
        }
        else if(pDel->pNext== NULL){
            list.pTail=pPre;
            pDel->pPrevious=NULL;
            pPre->pNext=NULL;
        }
        else{
            pPre->pNext=pDel->pNext;
            pDel->pNext->pPrevious=pPre;
            pDel->pPrevious=NULL;
            pDel->pNext=NULL;
        }
        delete pDel;
        pDel=NULL;
    }
}
DNode * searchNode(DoubleList list,int d){
    DNode * pTmp=list.pHead;
    while(pTmp!=NULL){
        if(pTmp->data== d) break;
        pTmp=pTmp->next;
    }
    return pTmp;
}
void sortList(DoubleList &list){
    for(DNode *pTmp = list.phead;pTmp!=NULL;pTmp->pNext){
        for(DNode *pTmp2 = pTmp->pNext;pTmp2!=NULL;pTmp2->pNext){
            if(pTmp->data > pTmp2->data){
                swap(pTmp->data,pTmp2->data);
            }
        }
    }
}
int main(){
    DoubleList list;
    Initialize(list);
    insertFirst(list,9);
    insertFirst(list,7);
    insertFirst(list,4);
    insertLast(list,10);
    insertLast(list,15);
    insertMid(list,3,16);
    cout<<"Danh sach lien ket doi la: ";
    PrintList(list);
    cout<<"\nDanh sach sau khi xoa: ";
    removeNode(list,10);
    PrintList(list);
    return 0; 
}