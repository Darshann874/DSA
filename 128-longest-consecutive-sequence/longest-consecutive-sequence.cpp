class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int c=1;
        for(auto n:st){
            if(st.find(n-1)==st.end()){
                int sc=1;
                int x=n;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    sc++;
                }
                c=max(sc,c);

            }
        }
        return c;
    }
};