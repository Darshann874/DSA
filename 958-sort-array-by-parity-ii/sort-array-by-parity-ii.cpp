class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>ev;
        vector<int>od;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ev.push_back(nums[i]);
            }
            else{
                od.push_back(nums[i]);
            }
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=ev.back();
                ev.pop_back();
            }else{
                ans[i]=od.back();
                od.pop_back();
            }
        }
        return ans;
    }
};