class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        int mx=INT_MIN;
        int mi=INT_MAX;
        vector<int>mv;
        vector<int>mxv;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            mxv.push_back(mx);
        }
        for(int i=n-1;i>=0;i--){
            mi=min(nums[i],mi);
            mv.push_back(mi);
        }
        reverse(mv.begin(),mv.end());
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int a=mxv[i]-mv[i];
            if(a<=k){
            ans=min(ans,i);
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};