class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_sum=INT_MIN;
        for(int it:nums){
            if(sum<0){
                sum=0;
            }
            sum+=it;
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};