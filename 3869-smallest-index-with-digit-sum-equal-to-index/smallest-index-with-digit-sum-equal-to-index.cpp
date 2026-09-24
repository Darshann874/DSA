class Solution {
public:
    int sum(int n){
        int a=0;
        while(n){
            int x=n%10;
            a+=x;
            n=n/10;
        }
        return a;
    }
    int smallestIndex(vector<int>& nums) {
        // int sm=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int z=sum(nums[i]);
            if(i==z){
                // sm=min(sm,z);
                return z;
            }

        }
        // return (sm==INT_MAX)?-1 :sm;
        return -1;
    }
};