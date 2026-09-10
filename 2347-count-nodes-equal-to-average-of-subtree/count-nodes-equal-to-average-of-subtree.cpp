/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int result;
    pair<int,int> solve(TreeNode* root){
        if(root==NULL)return {0,0};
        
        pair<int,int> ls=solve(root->left);
        pair<int,int> rs=solve(root->right);

        int ts=ls.first+rs.first+root->val;
        int tc=ls.second + rs.second +1;
        if(root->val==ts/tc){
            result++;
        }
        return {ts,tc};
    }
    // int findsum(TreeNode* root,int & c){
    //     if(root==NULL)return 0;
    //     c++;
    //     int ls=findsum(root->left,c);
    //     int rs=findsum(root->right,c);
    //     return ls+rs+root->val;
    // }
    int averageOfSubtree(TreeNode* root) {
        // if(root==NULL){
        //     return 0;
        // }
        // int res=0;
        // int c=0;
        // int sum=findsum(root,c);
        // if(root->val==sum/c){
        //     res++;
        // }
        // res+=averageOfSubtree(root->left);
        // res+=averageOfSubtree(root->right);
        // return res;
        result=0;
        solve(root);
        return result;
    }
};