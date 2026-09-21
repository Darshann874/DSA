class Solution {
public:
    int dp[21][21];
    bool solve(string s ,int i,string p, int j){
        if(j==p.length()){
            return i==s.length();
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        bool first_char=false;
        if(i<s.length() && (s[i]==p[j]|| p[j]=='.')){
            first_char=true;
        }
        if(j+1<p.length()&& p[j+1]=='*'){
            bool take= solve(s,i,p,j+2);
            bool not_take=first_char && solve(s,i+1,p,j);
            return dp[i][j]=take|| not_take;
        }
            return dp[i][j]=first_char && solve(s,i+1,p,j+1);
        
    }
    bool isMatch(string s, string p) {
        memset(dp,-1,sizeof(dp));
       return  solve(s,0,p,0);
    }
};