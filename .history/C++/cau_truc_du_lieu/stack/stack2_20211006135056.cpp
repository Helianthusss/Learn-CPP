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
int pop(Stack &stack){
    int d=stack->data;
    Node *pDel =stack;  
    stack =stack->pLink;
    pDe;->pLink=NULL;
    delete pDel;
    return d;
}
int main(){
    Stack stack;
    initialize(stack); 
    push(stack, 5);
    push(stack,4);
    push(stack,3);
    cout<<pop(stack);
    return 0;  
}