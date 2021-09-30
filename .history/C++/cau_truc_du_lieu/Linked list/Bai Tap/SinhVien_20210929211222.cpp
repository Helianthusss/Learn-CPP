#include<bits/stdc++.h>
#define SinhVien Item
using namespace std;
struct SinhVien{
    int ID;
    string fullName;
    int day,month,year;
    float GPA;
    string Class;
    string major;// nganh
};
struct Node{
    Item *data;
    Node *next;
};
struct Singlelist{
	Node* head;
	Node* tail;
	long size;
 
	Slist();
 
	Node* CreateNode(Item *sv);
	void InsertLast(Item sv);
	void findID();
	void findName();
	void findDate();
	void majorStatistics();
	void classStatistics();
	void findhighestGPA();
	void findlowestGPA();
	void countMajor();
	void deleteDuplicate();
 
	void nhapSinhVien(Item &sv);
	void nhapDanhSach(int &soluong);
    void XuatSinhVien(Node *sv);
	void traverse();
};
Singlelist::Slist(){
	head=NULL;
	tail=NULL;
	size=0;	
}
Node* Singlelist::CreateNode(Item *sv){
    Node *pNode= new Node;
    if(pNode != NULL){
        pNode->data=sv;
        pNode->next=NULL;
    }
    else{
        cout<<"Cap phat bo nho that bai!!!";
    }
    return pNode;
}
void Singlelist::nhapSinhVien(Item &sv){
	cout<<"\nNhap ma sinh vien: ";
	cin>>sv.ID;
    cin.ignore();	
	cout<<"\nNhap ten sinh vien: ";
	getline(cin,sv.fullName);
	cout<<"\nNhap ngay thang nam sinh: ";
	cin>>sv.day>>sv.month>>sv.year;
    cout<<"\nNhap GPA: ";
	cin>>sv.GPA;
    cin.ignore();	
	cout<<"\nNhap lop: ";
	getline(cin,sv.Class);
    cin.ignore();	
	cout<<"\nNhap nganh: ";
	getline(cin,sv.major);
}
void Singlelist::nhapDanhSach(int &soluong){
    Item sv;
    cout<<"\nNhap so luong sinh vien: ";
    cin>>soluong;
    for(int i=0; i<soluong; i++){
        cout<<"\nNhap sinh vien thu "<<i+1;
        nhapSinhVien(sv);
        InsertLast(sv);
    }
}
void Singlelist::InsertLast(Item sv){
	Node *pNode=CreateNode(sv);
    if(size == 0){
        head = tail = pNode;
        size++;
    }
    else{
	tail->next=pNode;
	tail=pNode;
	size++;
    }
}
void Singlelist::findID(){
    int id_find;
    cout<<"Nhap id can tim: ";
    cin>>id_find;
    Node *a = head;
    while(a->data.ID != id_find){
        if(a->next == NULL){
            cout<<"Khong co id nao trung khop"<<endl;
            return;
        }
        a=a->next;
    }
    XuatSinhVien(a);
}
void Singlelist::findName(){
    string name_find;
    cout<<"Nhap ten sinh vien can tim: ";
    cin.ignore();
    getline(cin,name_find);
    Node *a = head;
    while(a->data.fullName != name_find){
        if(a->next == NULL){
            cout<<"No such student has been found"<<endl;
            return;
        }
        a=a->next;
    }
    XuatSinhVien(a);
}
void Singlelist::findDate(){
    int day,month,year;
    cout<<"Nhap ngay thang nam sinh can tim: ";
    cin>>day>>month>>year;
    Node *a = head;
    while(a->data.day != day && a->data.month != month && a->data.year != year ){
        if(a->next == NULL){
            cout<<"Khong co sinh vien nao !"<<endl;
            return;
        }
        a=a->next;
    }
    XuatSinhVien(a);
}
void Singlelist::majorStatistics(){
    int count = 0;
    Node *a = head;
    cout<<"--->Major "<<a->data.major<<endl;
    while(a!=NULL){
        XuatSinhVien(a);
        count++;
        if(a == tail){
            cout<<"Major "<<a->data.major<<" has "<<count<<" students"<<endl;
        }
        else if((a->next->data.major!=a->data.major)){
            cout<<"Major "<<a->data.major<<" has "<<count<<" students"<<endl;
            count = 0;
            if(a != tail){
                cout<<"--->Major "<<a->next->data.major<<endl;
            }
        }
        a = a->next;
    }
}
void Singlelist::classStatistics(){
    int count = 0;
    Node *a = head;
    cout<<"--->Class "<<a->data.Class<<endl;
    while(a!=NULL){
        XuatSinhVien(a);
        count++;
        if(a == tail){
            cout<<"Class "<<a->data.Class<<" has "<<count<<" students"<<endl;
        }
        else if((a->next->data.Class!=a->data.Class)){
            cout<<"Class "<<a->data.Class<<" has "<<count<<" students"<<endl;
            count = 0;
            if(a != tail){
                cout<<"--->Class "<<a->next->data.Class<<endl;
            }
        }
        a = a->next;
    }
}
void Singlelist::XuatSinhVien(Node *sv){
    cout<<"\nMa sinh vien: "<<sv->data.ID;
    cout<<"\nTen sinh vien: "<<sv->data.fullName;
    cout<<"\nNgay thang nam sinh: "<<sv->data.day<<"/"<<sv->data.month<<"/"<<sv->data.year;
    cout<<"\nDiem trung binh: "<<sv->data.GPA;
    cout<<"\nLop: "<<sv->data.Class;
    cout<<"\nNganh: "<<sv->data.major;
}

void Singlelist::traverse(){
	Node *p=head;
	cout<<"Information of students:"<<endl;
	while(p!=NULL){
		print(p);
		p=p->next;
	}
	delete p;
}
void Singlelist::findhighestGPA(){
    Node* a = head;
    Node* cur = head->next;
    while(cur != NULL){
        if(cur->data.GPA > a->data.GPA){
            a = cur;
        }
        cur = cur->next;
    }
    cout<<"==Sinh vien co diem GPA cao nhat la:"<<endl;
    XuatSinhVien(a);
}
void Singlelist::findlowestGPA(){
    Node* a = head;
    Node* cur = head->next;
    while(cur != NULL){
        if(cur->data.GPA < a->data.GPA){
            a = cur;
        }
        cur = cur->next;
    }
    cout<<"==Sinh vien co diem GPA thap nhat:"<<endl;
    XuatSinhVien(a);
}
void Singlelist::countMajor(){
    int count = 0;
    Node *a = head;
    cout<<"<--->Major "<<a->data.major;
    while(a!=NULL){
        count++;
        if(a == tail){
            cout<<............" has "<<count<<" students"<<endl;
        }
        else if((a->next->data.Class!=a->data.Class)){
            cout<<" has "<<count<<" students"<<endl;
            count = 0;
            if(a != tail){
                cout<<"<--->Major "<<a->next->data.major;
            }
        }
        a = a->next;
    }
}

