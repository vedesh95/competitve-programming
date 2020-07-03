Good morning! Here's your coding interview problem for today.

This problem was asked by Google.

Given the root of a binary tree, return a deepest node. For example, in the following tree, return d.

    a
   / \
  b   c
 /
d



1.The idea here is to find the height of the given tree and then print the node at the bottom-most level.
O(n)

2.The idea is to do Inorder traversal of given binary tree. While doing Inorder traversal, we pass level of current node also. 
We keep track of maximum level seen so far and value of deepest node seen so far.

int  util(Node* root,int level,int &maxlevel,int &res)
{
  util(root->left,level++,maxlevel,res);
  if(level>maxlevel)
  {
    res=root->data;maxlevel=level;
  }
  
  util(root->right,level++,maxlevel,res);
    
}
int deppest(Node* root)
{
  int res=-1,level=0,maxlevel=-1;
  util(root,level,maxlevel,res);
  return res;
}
