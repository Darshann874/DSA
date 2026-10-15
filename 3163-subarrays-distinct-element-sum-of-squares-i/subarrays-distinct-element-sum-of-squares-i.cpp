class Solution {
public:
    
    int sumCounts(vector<int>& nums) {
        long long sum=0;
        
        for(int i=0;i<nums.size();i++){
            set<int>st;
            for(int j=i;j<nums.size();j++){
                
                st.insert(nums[j]);
                int a= st.size();
                sum+=a*a;
            }
        }
        return sum;
    }
};