#include<bits/stdc++.h>
using namespace std;
 
typedef struct Node
{
    int data;
    Node* left;
    Node* right;
} node_t;
 
void Free( node_t* root )
{
    if ( root == NULL )
        return;
 
    Free( root->left );
    Free( root->right );
    free( root );
}

int LeftOf( const int value, const node_t* root )
{
    return value < root->data;
}
 
int RightOf( const int value, const node_t* root )
{
    return value > root->data;
}
node_t* Insert( node_t* root, const int value )
{
    if ( root == NULL )
    {
        node_t* node = (node_t*)malloc( sizeof( node_t ) );
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    if ( LeftOf( value, root ) )
        root->left = Insert( root->left, value );
    else if ( RightOf( value, root ) )
        root->right = Insert( root->right, value );
    return root;
}

void PreOrder(node_t* root){
    if(root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

int height(node_t*root)
{
  int h = 0;
  if(root != NULL)
  {
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    int maxHeight = max(lHeight,rHeight);
  }
  return maxHeight;
}

int main()
{
    node_t* root = NULL;
 
    root = Insert( root, 10 );
    root = Insert( root, 5 );
    root = Insert( root, 1 );
    root = Insert( root, 7 );
    root = Insert( root, 40 );
    root = Insert( root, 50 );

    PreOrder(root);
    cout << "\nHeight of the tree is " << height(root) << endl;
    Free( root );
    root = NULL;
    return 0;
}