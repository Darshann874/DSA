class Solution {
public:
    // int l = 0;
    // int h = 0;
    // void solve(vector<int>&nums,int left,int right,int l,int h){
        
    // }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // solve(nums, 0, n - 1, l, h);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};