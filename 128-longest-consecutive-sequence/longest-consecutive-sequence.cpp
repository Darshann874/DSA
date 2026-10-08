class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i:nums){
            st.insert(i);
        }
        int count =0;
        for(auto it :st){
            if(st.find(it-1)==st.end()){
            int sequence=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                sequence++;
                x++;
            }
            
            count=max(count,sequence);
            }
        }
        return count;
    }
};