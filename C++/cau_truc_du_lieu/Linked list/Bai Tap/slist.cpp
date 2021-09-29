#include<iostream>
using namespace std;

#define int Item;
struct Node{
	Item data;
	Node *Next;
};
struct Slist{
    Node *Head;
	Node * Tail;
    long size;
};
void Slist::CreateNode( Item v){
    Node *p = new Node;
    p->data=v;
	p->Next=NULL;
}
void Slist::AddFirst(const Item v){
    Node *p = CreateNode(v);
    p->Next=Head;
	Head=p;
    size ++;
}