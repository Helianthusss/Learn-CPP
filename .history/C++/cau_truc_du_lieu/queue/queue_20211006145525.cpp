#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *pLink;
};
struct Queue{
    Node *pFront;
    Node *pRear;
};
void initialize(Queue &queue){
    queue.pFront= queue.pRear=NULL;
}
Node *CreateNode(int d){
   Node *pNode=new Node;
   if(pNode==NULL){
       cout<<" cap phat bo nho that bai";
   }
   pNode->data=d;  
   pNode->pLink=NULL;
}
void enQueue(Queue &queue, int d){
    Node *pNode=CreateNode(d);
    if(queue.pFront==NULL) queue.pFront=queue.pRear=pNode;
    else{
        queue.pRear->pLink = pNode;
        queue.pRear=pNode;
    }
}
int deQueue(Queue &queue){
    int d=queue.pFront->data;
    Node *pDel =queue.pFront;  
    queue =queue.pFront->pLink;
    pDel->pLink=NULL;
    delete pDel;
    return d;
}
int main(){
    Queue queue;
    initialize(queue);
    enQueue(queue,2);
    enQueue(queue,3);
    enQueue(queue,5);
    cout<<deQueue(queue)<<" ";
    cout<<deQueue(queue)<<" ";
    cout<<deQueue(queue)<<" ";


}