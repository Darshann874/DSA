class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n);
        if(n==1)return nums[0];
        int p2=nums[0];
        int p1=max(nums[0],nums[1]);
        int res=p1;
        for(int i=2;i<n;i++){
            res=max(p2+nums[i],p1);
            p2=p1;
            p1=res;
        }
        return res;
    }
};