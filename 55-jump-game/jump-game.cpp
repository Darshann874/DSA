class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int m=0;
        for(int i=0;i<n;i++){
            if(i<=m){
                m=max(m,nums[i]+i);
            }else{
                return false;
            }
        }
        return true;
    }
};