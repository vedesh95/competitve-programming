/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> ans;
    stack<TreeNode*> s;
    TreeNode* curr=root;
    bool flag=1;
    while(flag){
        if(curr){
            s.push(curr);curr=curr->left;
        }else{
            if(s.empty()) flag=0;
            else{
                curr=s.top();s.pop();
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
    }
    return ans;
}
