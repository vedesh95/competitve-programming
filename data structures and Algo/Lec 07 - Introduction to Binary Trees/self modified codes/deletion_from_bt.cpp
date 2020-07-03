// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};

/* Inorder traversal of a binary tree*/
void inorder(struct Node* temp)
{
	if (!temp)
		return;
	inorder(temp->left);
	cout << temp->key << " ";
	inorder(temp->right);
}

void deletionBT(struct Node* root, int key);

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     int key;
     cin>>key;
     deletionBT(root, key);
     inorder(root);
     cout<<endl;
  }
  return 0;
}
// } Driver Code Ends
/*
Structre of the node of the tree is as
struct Node
{
	int key;
	Node* left, *right;
};
*/
// you are required to complete this function
void deletedeepest(Node* root,Node* delete_n)
{
    if (root == NULL)   return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) 
    {
        Node* current = q.front();
        q.pop();
        if(current==delete_n)
		{
			current=nullptr;
			delete (delete_n);
			return;
		} 
        if(current->right)
         if(current->right==delete_n)
            {
            	current->right=nullptr;
            	delete (delete_n);
            	return;
			}
		else q.push(current->right);
        if(current->left)
         if (current->left==delete_n)
            {
            	current->left=nullptr;
            	delete (delete_n);
            	return;
			}
		else q.push(current->left);
    }
}
void deletionBT(struct Node* root, int key)
{
    if (root == NULL)   return;
    queue<struct Node*> q;
    q.push(root);
    struct Node* current = nullptr;
    struct Node* toreplace=nullptr;
    while (!q.empty()) 
    {
        current = q.front();
        q.pop();
		
		if(current->key==key)
		{
			toreplace=current;
		}
        if (current->left != NULL)
            q.push(current->left);
        if (current->right != NULL)
            q.push(current->right);
    }
    int deepd=current->key;
    toreplace->key=deepd;
    deletedeepest(root,current);
}
