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
    // TreeNode* invertTree(TreeNode* root) {
    //     if(root == nullptr){
    //         return nullptr;
    //     }
    //     //swap left and right pointer
    //     TreeNode *temp;
    //     temp = root->left;
    //     root->left = root->right;
    //     root->right = temp;

    //     //call recursion on left and right
    //     invertTree(root->left);
    //     invertTree(root->right);

    //     return root;
    // }
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root) return nullptr;
        
        stack<TreeNode*> st;
        TreeNode* temp;
        st.push(root);

        while(!st.empty()){

            //consider top of stack
            TreeNode* node = st.top();

            //pop from stack
            st.pop();

            //swap left and right pointers
            temp = node->left;
            node->left = node->right;
            node->right = temp;

            //if children exists push to stack
            if(node->left) st.push(node->left);
            if(node->right) st.push(node->right);

        }

        return root;

        
    }
};
