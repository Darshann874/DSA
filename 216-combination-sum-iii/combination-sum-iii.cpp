class Solution {
public:
    vector<vector<int>>ans;
    void solve(int k,int n,vector<int> &nums,vector<int>& temp,int i){
        if(temp.size()==k && n==0){
            ans.push_back(temp);
            return ;
        }
        if(i>8){
            return;
        }
        temp.push_back(nums[i]);
        solve(k,n-nums[i],nums,temp,i+1);
        temp.pop_back();
        solve(k,n,nums,temp,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums(9);
        for(int i=0;i<9;i++){
            nums[i]=i+1;
        }
        vector<int>temp;
        solve(k,n,nums,temp,0);
        return ans;
    }
};