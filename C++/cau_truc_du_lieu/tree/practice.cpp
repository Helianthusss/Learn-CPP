Item BinaryTree::deleteLeft(Node *p){
    if(p==NULL){
        cout<<"Current node is NULL\n";
        return -1;
    }
    else if(p->left == NULL){
        cout<<"No left child to delete\n";
        return -1;
    }
    else {
        Node *q=p->left;
        if(q->left != NULL || q->right != NULL){
            cout<<" cannot delete non-leaf node\n";
            return -1
        }
        else {
            Item value = q->data;
            p->left =NULL;
            delete q;
            return value;
        }
    }
}
Item BinaryTree::deleteRight(Node *p){
    if(p==NULL){
        cout<<"Current node is NULL\n";
        return -1;
    }
    else if(p->right == NULL){
        cout<<"No left child to delete\n";
        return -1;
    }
    else {
        Node *q=p->right;
        if(q->left != NULL || q->right != NULL){
            cout<<" cannot delete non-leaf node\n";
            return -1
        }
        else {
            Item value = q->data;
            p->right =NULL;
            delete q;
            return value;
        }
    }
}
void BinaryTree::deleteTree(Node* &root){
    if(root != NULL){
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
        root=NULL;
    }
}