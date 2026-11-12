class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int m=1;
        int a=1;
        int c=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>(nums[i+1])){
                c++;
                m=max(m,c);
            }
            else{
                c=1;
            }
        }
        c=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<(nums[i+1])){
                c++;
                a=max(a,c);
            }
            else{
                c=1;
            }
        }
        m=max(a,m);
        return m;

    }
};