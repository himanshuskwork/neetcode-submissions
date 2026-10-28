/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res(0,0);

        if(!root){
            return {};
        }
        
        stack<TreeNode*> st; 
        st.push(root);

        TreeNode* curr;
        while(!st.empty()){

            //get the top OR Operate on TOP of stack
            curr = st.top(); st.pop();

            res.push_back(curr->val);

            //add to Stack
            if(curr->right) st.push(curr->right);
            
            if(curr->left) st.push(curr->left);

        }

        return res;
        
    }
};