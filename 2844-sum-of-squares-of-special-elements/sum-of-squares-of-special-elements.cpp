class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans=0 ;
        int n=nums.size();
        int i=1;
        for(auto a:nums){
            if(n%i==0){
                ans+=a*a;
            }
            i++;
        }
        return ans;
    }
};