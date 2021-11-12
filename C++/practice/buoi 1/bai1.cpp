// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
#include<iostream>
using namespace std;
typedef int Item;
// khoi tao danh sach lien ket don
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
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
//Nhập vào danh sách số nguyên với số lượng phần tử biết trước. Số lượng phần tử do người dùng nhập vào.

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

// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Nhập vào danh sách số nguyên. Ngừng nhập khi người dùng nhập vào số 0. 

void nhap(SList &s){
    int a;
    if(a==0) break;
    else{
        cin>>a;
        s.addLast(a);
    }
}
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// In ra màn hình danh sách vừa nhập.

void SList::traverse() const {
    Node* p = head;
    while(p!=NULL){
        cout<<p->data<<"\t";
        p=p->next;
    }
    cout<<endl;
    delete p;
}
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Tính trung bình cộng các phần tử có trong danh sách. 
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
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Đếm số phần tử trong danh sách.

long SList::getSize(){
    return size;
}
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Chèn phần tử có giá trị y vào sau các phần tử có giá trị x.

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
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Chèn phần tử có giá trị y vào trước các phần tử có giá trị x.

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
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Cho biết giá trị của nút thứ k trong danh sách (k bắt đầu từ 0).

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
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Tìm phần tử lớn nhất (nhỏ nhất) trong danh sách.

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
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Xóa một phần tử có khóa là x.

void SList::removeFirst(){
    if(size==0) return;
    Node *t=head;
    head = head->next;
    delete t;
    size--;
}
void SList::removeLast(){
    if(size==0) return;
    if(size== 1){
        delete head;
        size--;
        return ;
    }
    Node *p = previous(tail);
    Node *t=tail; 
    p->next =NULL;
    tail=p;
    delete t;
    size--;
}
void SList::remove(Node *p){
    if(p==head){
        removeFirst();
        return;
    }
    if(p==tail){
        removeLast();
        return;
    }
    Node *pre = previous(p);
    pre->next=p->next;
    delete p;
    size--;
}
void removeX(SList &s, Item x){
    Node *p = s.head;
    while(p!=NULL){
        if(p->data==x) break;
        p=p->next;
    }
    s.remove(p);
}
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Xóa tất cả các phần tử có khóa là x.

void removeALLX(SList &s, Item x){
    Node* p=s.head;
    Node* a=NULL;
    while(p!=NULL){
        a=p;
        if(p->data==x) s.remove(p);
    }
    p=a->next;
}
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Kiểm tra xem dãy có phải là dãy tăng

bool checkTang(SList s){
    Node* p=s.head;
    while(p!=NULL){
        if(p==s.tail) break;
        if(p->data > p->next->data) return false;
        p =p->next;
    }
    return true;
}
// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// Sắp xếp danh sách vừa nhập theo chiều tăng dần. 

void SortList(SList &s){
	for(Node *pTmp=list.pHead;pTmp!=NULL;pTmp=pTmp->pNext){
		for(Node *pTmp2=pTmp->pNext;pTmp2!=NULL;pTmp2=pTmp2->pNext){
			if(pTmp->data > pTmp2->data){
				int tmp=pTmp->data;
				pTmp->data= pTmp2->data;
				pTmp2->data= tmp;
			}
		}
	}
}

// Họ tên: Trần Đức Anh 
// MSSV: 6151071034
// Ngày sinh:27/07/2002  
// Email: anhtrankoc@gmail.com
// ham main()
int main(){
    SList s;
    int n;
    nhap(s,n);
    nhap(s);
    s.traverse();
    TBC(s);
    cout<<"So luong phan tu trong danh sach: "<<s.size()<<endl;
    int x;
    cin>>x;
    chenSau(s,x);
    chenTruoc(s,x);
    int k;
    cin>>k;
    findX(s,k);
    max(s);
    min(s);
    removeX(s,x);
    removeALLX(s,x);
    if(checkTang(s)) cout<<"Day tang "<<endl;
    else cout<<"Day khong tang "<<endl;
    SortList(s);
}