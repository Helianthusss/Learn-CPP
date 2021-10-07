#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *pLink; 
};
typedef Node* Stack; 
void initialize(Stack &stack){
    stack=NULL;
}
Node *CreateNode(int d){
    Node *pNode = new Node;
    pNode->data=d;
    pNode->pLink=NULL;
}
void push(Stack &stack, int d){
    Node *pNode=CreateNode(d);
    if(stack == NULL) stack =pNode;
    else{
        pNode->pLink=stack;
        stack=pNode;  
    }
}
/*
int pop(Stack &stack){
    int d=stack->data;
    Node *pDel =stack;  
    stack =stack->pLink;
    pDel->pLink=NULL;
    delete pDel;
    return d;
}*/
// pop laay gia tri ra va xoa khoi stack
Node * pop(Stack &stack){
    if(stack ==NULL){
        return NULL;
    }
    Node *pDel =stack;  
    stack =stack->pLink;
    pDel->pLink=NULL;
    return pDel;
}
// top lay ra nhung k xoa khoi stack
Node * top(Stack &stack){
    return stack;
}
int main(){
    Stack stack;
    initialize(stack); 
    push(stack, 5);
    push(stack,4);
    push(stack,3);
    Node *n=pop(stack);
    cout<<n->data<<" ";
    n=pop(stack);
    cout<<n->data<<" ";
    return 0;  
}