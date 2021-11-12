#include<iostream>
using namespace std;

typedef int Item;

struct Node{
    Item data;
    Node *next;
};
struct SList{
    Node *head;
    Node *tail;
    long size;

    SList();

    Node* CreateNode(Item v);
    void addFirst(const Item v);
    void insertAfter(Node *p, Item v);
    void insertBefore(Node *p, Item v);
    void addLast(Item v);
    void removeFirst();
    void removeLast();
    void remove(Node *p);
    void traverse() const;
    Node* previous(Node *p);
    long getSize();
}
// cau 1
Node* SList::CreateNode(Item v){
    Node* p = new Node;
    p->data= v;
    p->next= NULL;
    return p;
}
void SList::addLast(Item v){
    Node *p =CreateNode(v);
    if(size == 0){
        head = p;
        tail =p;
    }
    else{
        tail->next = p;
        tail = p;
    }
    size ++;
}
void nhap(SList &s, int &n){
    int a;
    cout<<"So luong phan tu: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"] = ";
        cin >>a;
        s.addLast(a);
    }
}
// cau 2
void SList::removeLast(){
    if(size==0) return ;
    if(size==1){
        delete head;
        size--;
        return;
    }
    Node *p=previous(tail);
    Node *t=tail;
    p->next= NULL;
    tail = p;
    delete t;
    size--;
}
void nhap(SList &s){
    int a;
    do{
        cin>>a;
        s.addLast(a);
    }while(a!=0);
    s.removeLast();
}
// cau 3
void SList::traverse() const {
    Node* p = head;
    while(p!=NULL){
        cout<<p->data<<"\t";
        p=p->next;
    }
    cout<<endl;
    delete p;
}
// cau 4
long SList::getSize(){
    return size;
}
void TBC(SList s){
    int sum = 0;
    Node* p= s.head;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    cout<<(float)(sum/s.getSize())<<end;
}
// cau 5
long SList::getSize(){
    return size;
}
//cau6
void SList::insertAfter(Node *p, Item v){
    if(p==tail) addLast(v);
    else{
        Node *q=CreateNode(v);
        q->next=p->next;
        p->next=q;
    }
    size++;
}
void chenSau(SList s, Item x){
    Node* p=s.head;
    while(p !=NULL){
        if(p->data==x) break;
        p=p->next;
    }
    int y;
    cin>>y;
    s.insertAfter(p,y);
}
// cau 7
Node* SList::previous(Node* p){
    Node *t = head;
    while(t->next !=p) t= t->next;
    return t;
}
void SList::insertBefore(Node *p, Item v){
    if(p== head) addFirst(v);
    else {
        Node *pre =previous(p);
        insertAfter(pre,v);
    }
}
void chenTruoc(SList s, Item x){
    Node* p= s.head;
    while(p!=NULL){
        if(p->data == x) break;
        p=p->next;
    }
    int y;
    cin>>y;
    insertBefore(p,y);
}
// cau8
void findX(SList s,int k){
    int count =0;
    Node* p = s.head;
    while(p!=NULL){
        if(count == k) break;
        count ++;
        p=p->next;
    }
    cout<<p->data<<endl;
}
void max(SList s){
    Node* p=s.head;
    int max =p->data;
    while(p!=NULL){
        if(p->data >max) max=p->data;
        p->p->next;
    }
    cout<<max<<endl;
}
void min(SList s){
    Node* p=s.head;
    int min =p->data;
    while(p!=NULL){
        if(p->data <min) min=p->data;
        p->p->next;
    }
    cout<<min<<endl;
}