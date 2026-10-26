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
    // int maxDepth(TreeNode* root) {
    //     stack<pair<TreeNode*, int>> stk;
    //     stk.push({root, 1});
    //     int res = 0;

    //     while(!stk.empty()){
    //         pair<TreeNode*, int> current = stk.top();
    //         stk.pop();

    //         TreeNode* node = current.first;
    //         int depth = current.second;

    //         if(node != nullptr){
    //             res = max(res, depth);
    //             stk.push({node->left, depth+1});
    //             stk.push({node->right, depth+1});
    //         }
    //     }
    //     return res;
    // }

    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        stack<pair<TreeNode*, int>> st;
        int depth = 0;
        int res = 0;
        
        st.push({root, 1});
        while(!st.empty()){

            //store top of stack!
            pair<TreeNode*, int> current;
            current = st.top();
            
            TreeNode* node = current.first;
            depth = current.second;

            //pop the top!
            st.pop();

            if(node){
                res = max(res, depth);
                st.push({node->left, depth + 1});
                st.push({node->right, depth + 1});
            }
        }
        return res;


    }

    //BFS
    // int maxDepth(TreeNode* root) {
    //     queue<TreeNode*> q;
    //     if(root! = nullptr){
    //         q.push(root);
    //     }
    //     int level = 0;

    //     while(!q.empty()){
    //         int size = q.size();
    //         for(int i = 0; i<size; i++){
    //             TreeNode *node = q.front();
    //             q.pop();

    //             if(node->left != nullptr){
    //                 q.push(node->left);
    //             }
    //             if(node->left != nullptr){
    //                 q.push(node->left);
    //             }
    //         }
    //         level++;
    //     }
    //     return level;
    // }


};
