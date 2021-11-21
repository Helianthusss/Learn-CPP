// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

#include<bits/stdc++.h>
using namespace std;

typedef int Item;

struct Node{
    Item data;
    Node* left;
    Node* right;
};
// cay nhi phan
struct BinaryTree{
    Node* root;

    Node* createNode(Item v);
    bool isEmpty();
    void insertLeft(Node* p, Item v);
    void insertRight(Node* p, Item v);
    Item deleteLeft(Node* p);
    Item deleteRight(Node* p);
    void preOder(Node* root);
    void inOder(Node* root);
    void posOder(Node * root);
    Node* search(Node* p, Item v);
    void deleteTree(Node* &root);   
    Item HeightTree(Node *root)
    Item countNode(Node *root);
    Item countNodeLa(Node *root);
    Item countBiggerX(Node *root, Item x); 
};

Node* BinaryTree::createNode(Item v)
{
	Node *p=new Node;
	p->data = v;
	p->left=p->right=NULL;
	return p;
}

void BinaryTree::insert(Node* p, Item v){
    if(p==NULL) p=createNode(v);
    else if(p->left!=NULL && p->right ==NULL) p->right=createNode(v); 
    else if(p->left==NULL && p->right !=NULL) p->left=createNode(v);
    else p->left=createNode(v);
}
void nhapMang(BinaryTree &root, Item a[], int &n){
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        insert(root,a[i]);
    }
}
Item BinaryTree::deleteLeft(Node *p){
	if( p == NULL ){
		cout<<"current node is NULL"<<endl;
		return -1;	
	}
	else if(p->left == NULL){
		cout<<"No left child to delete"<<endl;
		return -1;
	}
	else{
		Node *q = p->left;
		if(q->left !=NULL || q->right !=NULL){
			cout<<"\n cannot delete non-leaf node"<<endl;
			return -1;
		} 
		else{
			Item value=q->data;
		    p->left=NULL;
			delete q;
			return value;
		}
	}
}
Item BinaryTree::deleteRight(Node *p){
	if( root == NULL ){
		cout<<"current node is NULL"<<endl;
		return -1;
	}
	else if(root->right == NULL){
		cout<<"No right child to delete"<<endl;
		return -1;
	}
	else{
		Node *q = p->right;
		if(q->left !=NULL || q->right !=NULL){
			cout<<"\n cannot delete non-leaf node"<<endl;
			return -1;
		} 
		else{
			Item value=q->data;
		    p->right=NULL;
			delete q;
			return value;
		}
	}
}
void BinaryTree::deleteTree(Node* &root){
	if(root != NULL){
		delete(root->left);
		delete(root->right);
		delete root;
		root = NULL;
	}
}
void BinaryTree::preOrder(Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
	}	
}
void BinaryTree::inOrder(Node* root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
	}	
}
void BinaryTree::posOrder(Node* root){
    if(root!=NULL){
        posOrder(root->left);
        posOrder(root->right);
        cout<<root->data<<" ";
	}	
}
Node* BinaryTree::search(Node *p , Item v){
	if(p==NULL) return NULL;
	if(p->data ==v) return p;
	Node *q=search(p->left,v);
	if(q==NULL) q =search(p->right,v);
	return q;
}
Item Max(int a, int b) {
    if(a>b) return a;
    else return b;
}
Item BinaryTree::HeightTree(Node *root) {
    if( root == NULL) return 0;
    else return Max(HeightTree(root->left),HeightTree(root->right)) + 1;
}
// dem so nut treen cay
Item BinaryTree::countNode(Node *root){
    if( root == NULL) return 0;
    else return countNode(root->left) +countNode(root->right);
}
// dem so nut la tren cay
Item BinaryTree::countNodeLa(Node *root){
    if(root== NULL) return 0;
    else{
        if(root->left == NULL && root->right == NULL) return 1;
        else return countNodeLa(root->left) +countNodeLa(root->right);
    }
}
int count =0;
Item BinaryTree::countBiggerX(Node *root, Item x){
    if(root==NULL) return 0;
    if(root->data >x) count++;
    countBiggerX(root->left,x);
    countBiggerX(root->right,x);
}
// Item BinaryTree::findMax(Node* root){
//     if(root==NULL) return 0;
//     int q = root->data;
//     int leftq=findMax(root->left);
//     int rightq=findMax(root->right);
//     if(leftq>q) q=leftq;
//     if(rightq>q) q=rightq;
//     return q;
// }
// Item BinaryTree::findMin(Node* root){
//     if(root==NULL) return 0;
//     int q = root->data;
//     int leftq=findMin(root->left);
//     int rightq=findMin(root->right);
//     if(leftq<q) q=leftq;
//     if(rightq<q) q=rightq;
//     return q;
// }
int main(){
    BinaryTree root;
    int a[100];
    int n;
    nhapMang(root,a,n);
    return 0;
}
