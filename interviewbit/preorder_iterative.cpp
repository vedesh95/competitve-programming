/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector<int> ans;TreeNode* curr=root;
    stack<TreeNode* > s;bool flag=1;
    while(flag){
        if(curr){
            ans.push_back(curr->val);s.push(curr->right);
            curr=curr->left;
        }else{
            if(s.empty()) flag=0;
            else{
                curr=s.top();s.pop();
            }
        }
    }
    return ans;
    
}
