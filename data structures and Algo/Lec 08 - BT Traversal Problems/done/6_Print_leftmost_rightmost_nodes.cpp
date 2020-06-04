/*Write a function to print Boundary Traversal of a binary tree. Boundary Traversal of a binary tree here means that you have to print boundary nodes of the binary tree Anti-Clockwise starting from the root.
Note: Boundary node means nodes present at boundary of leftSubtree and nodes present at rightSubtree also including leaf nodes*/
/*This is a function problem.You only need to complete the function given below*/
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
void printleft(Node* root)
{
	if (root==nullptr) return;
	if(root->left) {cout<<root->data<<" ";printleft(root->left);}
	else if(root->right) {cout<<root->data<<" ";printleft(root->right);}
}
void printright(Node* root)
{
	if(root==nullptr) return;
	if(root->right)  {printright(root->right);cout<<root->data<<" ";}
	else if(root->left)  {printright(root->left);cout<<root->data<<" ";}
	
}

void boundary(Node* root)
{
	if(root==nullptr) return;
	if(root->left==nullptr && root->right==nullptr) cout<<root->data<<" ";
	boundary(root->left);
	boundary(root->right);
}

void printBoundary(Node *root)
{
     //Your code here
        //Your code here
     cout<<root->data<<" ";
     printleft(root->left);
     boundary(root->left);
     boundary(root->right);
     printright(root->right);
}
/*1 3 2
20 8 4 10 14 25 22 .*/
