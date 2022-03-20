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
        stringstream ss(data); //data�ର�r��
        string item;
        TreeNode* root = NULL;
        
        while(getline(ss,item,'-')) //�J��'-'�ᰱ��Ū��
            root = insert(root,stoi(item));//stoi�N�r���ഫ��int
        return root;
        
    }
private:
    string encode(TreeNode* root){
        if(!root)
            return "";
        return to_string(root->val)+"-"+encode(root->left)+encode(root->right);//to_string�����F���ഫ���r��
    }
    TreeNode* insert(TreeNode* root,int val){
        if(root == NULL){
            TreeNode* temp=new TreeNode(val); //�p�Groot��NULL�N��гy�sTreenode�s���I�[�b�o
            return temp;
        }
        if (val <= root->val)
            root->left=insert(root->left,val);//�����j�M
        else
            root->right=insert(root->right,val);//���k�j�M
        return root;
            
    }    
};


// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
