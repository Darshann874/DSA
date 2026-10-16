class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int n=strs.size();
        for(int i=1;i<n;i++){
            while(strs[i].find(s)!=0){
                s.pop_back();
            }
            if(s.empty()){
                return "";
            }
        }
        return s;
    }
};