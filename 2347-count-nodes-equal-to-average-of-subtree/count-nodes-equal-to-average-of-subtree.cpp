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
    int findsum(TreeNode* root,int & c){
        if(root==NULL)return 0;
        c++;
        int ls=findsum(root->left,c);
        int rs=findsum(root->right,c);
        return ls+rs+root->val;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int res=0;
        int c=0;
        int sum=findsum(root,c);
        if(root->val==sum/c){
            res++;
        }
        res+=averageOfSubtree(root->left);
        res+=averageOfSubtree(root->right);
        return res;
    }
};