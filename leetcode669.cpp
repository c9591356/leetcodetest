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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root) return root;   //step1
        if(root->val >= low && root->val <= high){
            root->left = trimBST(root->left,low,high);
            root->right = trimBST(root->right,low,high);
            return root;
        }     //step2
        if(root->val < low) //step3
            return trimBST(root->right,low,high);
        return trimBST(root->left,low,high); //step4
    }
};```

