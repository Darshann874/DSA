class Solution {
public:
    void findsub(vector<int>& nums,vector<vector<int>>& ans,vector<int>&temp,int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        findsub(nums,ans,temp,i+1);
        int d=i+1;
        temp.pop_back();
        while(d<nums.size()&& nums[d]==nums[d-1]){
            d++;
        }
        findsub(nums,ans,temp,d);


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        findsub(nums,ans,temp,0);
        return ans;
    }
};