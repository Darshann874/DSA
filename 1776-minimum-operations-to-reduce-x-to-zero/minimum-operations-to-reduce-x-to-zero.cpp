class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[sum]=i;
        }
        if(sum<x){
            return -1;
        }
        int rsum=sum-x;
        int l=INT_MIN;
        sum=0;
        for(int i=0;i<n;i++){
            sum+= nums[i];
            int target= sum-rsum;
            if(mp.find(target)!=mp.end()){
                int idx=mp[target];
                l=max(l,i-idx);
            }
        }
        return (l==INT_MIN)?-1:n-l;
    }
};