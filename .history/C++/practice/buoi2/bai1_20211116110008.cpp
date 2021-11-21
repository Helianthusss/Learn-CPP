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
class BinaryTree{
    public: 
        Node* root;
        int size;

        BinaryTree();
        BinaryTree(Item v);
        Node* createNode(Item v);
        void insertLeft(Node* p, Item v);
        void insertRight(Node* p, Item v);
        Item deleteLeft(Node* p);
        Item deleteRight(Node* p);
        void preOrder(Node* root);
        void inOder(Node* root);
        void inOrder(Node* root);
        void posOrder(Node* root);
        Node* search(Node* p, Item v);
        void deleteTree(Node* &root);   
        Item HeightTree(Node *root);
        Item countNode(Node *root);
        Item countNodeLa(Node *root);
        void findBiggerX(Node *root, Item x); 
        Item findMax(Node* root);
        Item findMin(Node* root);
        bool isPerfectBinaryTree(Node *root);
};
BinaryTree::BinaryTree(){
    root = NULL;
    size = 0;
}
BinaryTree::BinaryTree(Item v){
    root = createNode(v);
    size = 1;
}
Node* BinaryTree::createNode(Item v)
{
	Node *p=new Node;
	p->data = v;
	p->left=p->right=NULL;
	return p;
}
void BinaryTree::insertLeft(Node* p, Item v){
    if(p==NULL) cout<<"Cannot insert to a NULL"<<endl;
    else if(p->left!=NULL ) cout<<"Left child existed"<<endl;
    else p->left=createNode(v);
}

void BinaryTree::insertRight(Node* p, Item v){
    if(p==NULL) cout<<"Cannot insert to a NULL"<<endl;
    else if(p->right!=NULL ) cout<<"Right child existed"<<endl;
    else p->right=createNode(v);
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
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

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
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

Node* BinaryTree::search(Node *p , Item v){
	if(p==NULL) return NULL;
	if(p->data ==v) return p;
	Node *q=search(p->left,v);
	if(q==NULL) q =search(p->right,v);
	return q;
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

Item Max(int a, int b) {
    if(a>b) return a;
    else return b;
}
Item BinaryTree::HeightTree(Node *root) {
    if( root == NULL) return 0;
    else return Max(HeightTree(root->left),HeightTree(root->right)) + 1;
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn
// dem so nut tren cay

Item BinaryTree::countNode(Node *root){
    if( root == NULL) return 0;
    else return 1+countNode(root->left) +countNode(root->right);
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn
// dem so nut la tren cay

Item BinaryTree::countNodeLa(Node *root){
    if(root== NULL) return 0;
    else{
        if(root->left == NULL && root->right == NULL) return 1;
        else return countNodeLa(root->left) +countNodeLa(root->right);
    }
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

int countBigger =0;
void BinaryTree::findBiggerX(Node *root, Item x){
    if(root==NULL) return 0;
    if(root->data >x) countBigger++;
    countBiggerX(root->left,x);
    countBiggerX(root->right,x);
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

Item BinaryTree::findMax(Node* root){
    if(root==NULL) return 0;
    int q = root->data;
    int leftq=findMax(root->left);
    int rightq=findMax(root->right);
    if(leftq>q) q=leftq;
    if(rightq>q) q=rightq;
    return q;
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

Item BinaryTree::findMin(Node* root){
    if(root==NULL) return 0;
    int q = root->data;
    int leftq=findMin(root->left);
    int rightq=findMin(root->right);
    if(leftq<q) q=leftq;
    if(rightq<q) q=rightq;
    return q;
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

bool BinaryTree::isPerfectBinaryTree(Node *root){
    int h=HeightTree(root);
    int totalNoOfNode = countNode(root);
    return pow(2,h)-1 == totalNoOfNode;
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn
// ham main
int main(){
    BinaryTree b(5);
    b.insertLeft(b.root, 3);
    b.insertRight(b.root, 7);
    b.insertLeft(b.search(b.root,3), 2);
    b.insertRight(b.search(b.root,3), 10);
    b.insertLeft(b.search(b.root,7), 6);
    b.insertRight(b.search(b.root,7), 1);
    b.preOrder(b.root);
    cout<<endl<<"Height: "<<b.HeightTree(b.root)<<endl;
    cout<<"Number of nodes: "<<b.size<<endl;
    cout<<"Count leaf node: "<<b.countNodeLa(b.root)<<endl;
    b.findBiggerX(b.root,5);
    cout<<"Bigger than x: "<<b.countBiggerX(b.root,5)<<endl;
    cout<<"Max value: "<<b.findMax(b.root)<<endl;
    if(b.isPerfectBinaryTree(b.root)){
        cout<<"This tree is a perfect binary tree"<<endl;
    }
    b.deleteTree(b.root);
}

