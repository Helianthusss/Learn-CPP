#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
struct List{
    Node *head;
    Node *tail;
}

Node *createNode(int data);
void addHead(List &list, Node *p);

int main(){
    List list;
    int data;
    cout <<"Nhap vao gia tri cua data: ";
    cin >> data;
    Node* p = createNode(data);
    cout<< p->data<< endl;
    addHead(list, p);

    return 0; 
}

Node* createNode(int data){
    Node *p = new Node;
    if(p == NULL){
        return p;
    }
    p->data = data;
    p-> next = NULL;
    return p;
}

void addHead(List &list, Node *p){
    if(list.head == NULL){
        p = list.head;
        p = list.tail;
    }
    else{
        p->next = list.head;
        p = list.head;
    }
}