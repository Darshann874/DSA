class Solution {
public:
    set<vector<int>> st;
    void combsum(vector<int>& candidates, int target,int i,vector<int> &t,vector<vector<int>>&ans){
        if(i==candidates.size() || target<0){
            return;
        }
        if(target==0){
            if(st.find(t)==st.end()){
            st.insert(t);
            ans.push_back(t);
            }
        return ;
        }

        t.push_back(candidates[i]);
        combsum(candidates,target-candidates[i],i+1,t,ans);
        combsum(candidates,target-candidates[i],i,t,ans);
        t.pop_back();
        combsum(candidates,target,i+1,t,ans);

        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>t;
        combsum(candidates,target,0,t,ans);
        return ans;
    }
};