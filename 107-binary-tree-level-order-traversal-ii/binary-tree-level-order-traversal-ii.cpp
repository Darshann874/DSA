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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>qt;
        stack<vector<int>>st;
        vector<int>t;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        qt.push(root);
        while(!qt.empty()){
            int n=qt.size();
            vector<int>l;
            for(int i=0;i<n;i++){
                TreeNode* temp=qt.front();
                qt.pop();
                l.push_back(temp->val);
                if(temp->left){
                    qt.push(temp->left);
                }
                if(temp->right){
                    qt.push(temp->right);
                }
            }
            st.push(l);
        }
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        return ans;

    }
};