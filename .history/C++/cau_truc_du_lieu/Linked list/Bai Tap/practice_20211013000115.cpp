#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
struct List{
    Node* head;
    Node* tail;
};

Node* createNode(int data);
void addHead(Node *p, int data);
void addTail(Node *p, int data);
void printList(Node p);
// Node *addElement(Node *p, int data);
Node initHead();
Node input();

int main(){
    // List list;
    // int data;
    // int n;
    // cout <<"Nhap vao gia tri cua n: ";
    // cin >> n;
    // Node* p = createNode(data);
    // Node *t = p;
    // for(int i = 0; i<n; i++){
    //     cin>> data;
    //     t = addElement(p, data);
    // }
    // addHead(list, p);
    // printList();

    cout<<"Danh sach: "<< endl;
    Node p = initHead();
    printList(p);

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

void addHead(Node *p, int data){
    List list;
    if(list.head == NULL){
        p = list.head;
        p = list.tail;
    }
    else{
        p->next = list.head;
        p = list.head;
    }
}
void addTail(Node *p, int data){
    List list;
    if(list.head == NULL){
        p = list.head;
        p = list.tail;
    }
    else {
        p->next = list.tail;
        p = list.tail;
    }
}
void printList(List list){
    Node *p = list.head;
    while(p!=NULL){
        cout << p->data << " ";
        p = p-> next;
    }
}
// Node *addElement(Node *p, int data){
//     Node *q = createNode(data);
//     p->next = q;
//     return q;
// }
void initHead(){
    head = NULL;
}
Node input(){
    Node *p = initHead();
    Node *t = p;
    int n, data;
    while(n!=0){
        cout << "Nhap so luong phan tu n: ";
        cin >> n;
    }
    for(int i=0; i<n; i++){
        cout << "Nhap gia tri can them: ";
        cin >> data;
        t = addTail(p, data);
    }
    return p;
}