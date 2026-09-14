class Solution {
public:
    set<vector<int>>st;
    void solve(vector<int>& candidates, int i, int target, vector<int>& temp) {
                
                if(target==0){
                    st.insert(temp);
                    return;
                }
                if(i==candidates.size() || target<0){
                    return;
                }
                temp.push_back(candidates[i]);
                solve(candidates,i+1,target-candidates[i],temp);
                temp.pop_back();
                int j=i+1;
                while(j<candidates.size()&& candidates[j]==candidates[i]){
                    j++;
                    
                }
                solve(candidates,j,target,temp);
            }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());

        solve(candidates, 0, target, temp);
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};