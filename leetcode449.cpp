/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        return encode(root);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data); //data轉為字串
        string item;
        TreeNode* root = NULL;
        
        while(getline(ss,item,'-')) //遇到'-'後停止讀取
            root = insert(root,stoi(item));//stoi將字串轉換為int
        return root;
        
    }
private:
    string encode(TreeNode* root){
        if(!root)
            return "";
        return to_string(root->val)+"-"+encode(root->left)+encode(root->right);//to_string把任何東西轉換為字串
    }
    TreeNode* insert(TreeNode* root,int val){
        if(root == NULL){
            TreeNode* temp=new TreeNode(val); //如果root為NULL就把創造新Treenode新的點加在這
            return temp;
        }
        if (val <= root->val)
            root->left=insert(root->left,val);//往左搜尋
        else
            root->right=insert(root->right,val);//往右搜尋
        return root;
            
    }    
};


// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
