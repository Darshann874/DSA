class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int a=0,b=0;
        // int n=nums.size()-1;
        // for(int i=0;i<=n-1;i++){
        //     for(int j=i+1;j<=n;j++){
        //         if(nums[i]+nums[j]==target){
        //                 a=i;
        //                 b=j;
        //         }
        //     }
        // }
        // return{a,b};
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mp.find(x)!=mp.end()){
                return{i,mp[x]};
            }
            mp.insert({nums[i],i});
        }
        return {};
        
    }
};