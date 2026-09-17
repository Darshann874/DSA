class Solution {
public:
    int n;
    int solve(vector<int>& nums, int i,int tar){
        if(i==n){
            if(tar==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        int add=solve(nums,i+1,tar+nums[i]);
        int sub=solve(nums,i+1,tar-nums[i]);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        n=nums.size();
        return solve(nums,0,target);
    }
};