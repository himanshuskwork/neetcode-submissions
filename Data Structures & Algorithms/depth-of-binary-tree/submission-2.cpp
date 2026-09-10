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
//Maximum Depth of Binary Tree || 
class Solution {
public:
    //Recursion
    // int maxDepth(TreeNode* root) {
    //     // TreeNode* node;

    //     if(!root){
    //         return 0;
    //     }
        
    //     return 1 + max(maxDepth(root->left), maxDepth(root->right));

    // }

    //Iterative DFS
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*, int>> stk;
        stk.push({root, 1});
        int res = 0;

        while(!stk.empty()){
            pair<TreeNode*, int> current = stk.top();
            stk.pop();

            TreeNode* node = current.first;
            int depth = current.second;

            if(node != nullptr){
                res = max(res, depth);
                stk.push({node->left, depth+1});
                stk.push({node->right, depth+1});
            }
        }
        return res;
    }
};
