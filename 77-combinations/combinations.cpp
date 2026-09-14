class Solution {
public:
    void solve(vector<int> &nums,vector<vector<int>> & ans,int k,int i,vector<int> &temp){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(i==nums.size())return;
        temp.push_back(nums[i]);
        solve(nums,ans,k,i+1,temp);
        temp.pop_back();
        solve(nums,ans,k,i+1,temp);

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
        vector<int>temp;
        solve(nums,ans,k,0,temp);
        return ans;

    }
};