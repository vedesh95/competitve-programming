struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references

    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
}; */

// Method that returns the bottom viw.

void util(Node* root,int hd,int level,map<int,pair<int,int> > &mp){
    if(root==nullptr) return;
    if(mp.find(hd)==mp.end()){
        mp[hd]=make_pair(level,root->data);
	}
    else{
        pair<int,int> p=mp[hd];
        if(p.first<=level) mp[hd]=make_pair(level,root->data);
	}
    util(root->left,hd-1,level+1,mp);
    util(root->right,hd+1,level+1,mp);
}
vector <int> bottomView(Node *root)
{
   // Your Code Here
   if(root==nullptr) return;
   util(root,0,0,mp);
   map<int,pair<int,int> > mp; // hd, level,val
   util(root,0,0,mp);

   vector<int> vec;

   for(auro i:mp){
       vec.push_back(i.second.second);
   }

   return vec;
}