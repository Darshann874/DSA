class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        // sort(nums.begin(),nums.end());
        // int n= nums.size();
        // vector<vector<int>>a;
        // for(int i=0;i<n;i++){
        //     if(a.empty()||a.back()[1]<nums[i][0]){
        //         a.push_back(nums[i]);
        //     }
        //     else{
        //     a.back()[1]=max(a.back()[1],nums[i][1]);
        //     }
        
        // }
        // return a;
        int n=nums.size();
        if(n<=1){
            return nums;
        }
        vector<int>temp;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        temp=nums[0];
        for(auto it:nums){
            if(it[0]<=temp[1]){
                temp[1]=max(temp[1],it[1]);
            }else{
                ans.push_back(temp);
                temp=it;
            }

            
        }
        ans.push_back(temp);

        return ans;
    }
};