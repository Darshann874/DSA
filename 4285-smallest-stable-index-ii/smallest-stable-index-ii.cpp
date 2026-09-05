class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>minx(n);
        
        int m=INT_MIN;
        
        minx[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            minx[i]=min(nums[i],minx[i+1]);
            
        }
        
        for(int i=0;i<n;i++){
            m=max(nums[i],m);
            if(m-minx[i]<=k){
                return i;
            }
        }
        return -1;
    }
};