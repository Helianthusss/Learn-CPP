// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn
#include <iostream>
using namespace std;
 
typedef int Item;
struct Node {
	Item data;
	Node* left;
	Node* right;	
};
class BST {
public:	

	BST();
	BST(Item v);
	Node* createNode(Item v);
	bool isEmpty();	
	void inOrder(Node* root);
	void decrease(Node* root);
	void deleteTree(Node* &root);
	Node* search(Node* p, Item v);
	void insert(Node* &root, Item v);
	Node* minValueNode(Node* p);
	Node* maxValueNode(Node* p);
	void sumValue(Node* root);
	Node* root;	
};
BST::BST() {
	root = NULL;
}
BST::BST(Item v) {
	root = createNode(v);
}
bool BST::isEmpty() {
	return (root == NULL);
}
void BST::inOrder (Node* root){
    if (root != NULL){
        inOrder (root->left);
        cout << root->data <<" ";
        inOrder(root->right);
    }
}
void BST::decrease(Node* root){
	if (root != NULL){
        decrease(root->right);
        cout << root->data <<" ";
        decrease(root->left);
    }
}
Node* BST::createNode(Item v) {	
    Node* p = new Node;
    p->data = v;
    p->left = p->right = NULL;
    return p;
}
void BST::insert(Node* &root, Item v) {
    if (root == NULL){
        root = createNode(v);
    }
    else {
        if (v < root->data)
            insert(root->left,v);
        else if (v > root->data)
            insert(root->right,v);
    }
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

Node* BST::minValueNode(Node* p) { 
    if(p->left == NULL){
        return p;
    }
    return minValueNode(p->left);
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

Node* BST::maxValueNode(Node* p){
	if(p->right == NULL){
		return p;
	}
	return maxValueNode(p->right);
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn

Node* BST::search(Node* root,Item v){
    if (root == NULL){
        return NULL;
    }
    if(root->data == v){
        return root;
    }
    else if(v < root->data)
        search(root->left,v);
    else if(v > root->data)
        search(root->right,v);
    return root;
}
int sum = 0;
void BST::sumValue(Node* root){
	if (root != NULL){
		sum += root->data;
		sumValue(root->left);
		sumValue(root->right);
	}
}
BST createFromArray(Item a[], int length) {
    BST b;
    for(int i = 0; i<length; i++){
        b.insert(b.root, a[i]);
    }
    return b;
}
// Họ tên: Trần Đức Anh
// MSSV: 6151071034
// Ngày sinh: 27/07/2002
// Email: 6151071034@st.utc2.edu.vn
// ham main
int main() {
	int a[] = {6, 2, 1, 4, 3, 9, 8, 7, 13, 11, 18};
	BST bst = createFromArray(a, sizeof(a)/sizeof(int));	
	cout<<"Increase: ";
	bst.inOrder(bst.root);
	cout<<endl;
	cout<<"Decrease: ";
	bst.decrease(bst.root);
	cout<<endl;
	cout<<"Max value: "<<bst.maxValueNode(bst.root)->data<<endl;
	cout<<"Min value: "<<bst.minValueNode(bst.root)->data<<endl;
	bst.sumValue(bst.root);
	cout<<"Sum value in tree: "<<sum<<endl;
	return 0;
}
