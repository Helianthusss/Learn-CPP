void BST::insert(Node* &root, Item v) {
	// WRITE THE CODE FOR INSERTING A NODE HERE
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
// create a BST with keys from an array
BST createFromArray(Item a[], int length) {
	// WRITE THE CODE TO CREATE A BST FROM AN ARRAY HERE
	BST p;
	for(int i = 0; i<length; i++){
		p.insert(p.root, a[i]);
	}
	return p;
}