class Solution {
public:

    int t[1001][1001];
    bool solve(int i, int j, string& s) {
        if (i >= j)
            return 1;


        if(t[i][j]!=-1){
            return t[i][j];
        }
        if (s[i] == s[j])
            return t[i][j]=solve(i + 1, j - 1, s);
        else
            return t[i][j]=0;
    }
    string longestPalindrome(string s) {
        memset(t,-1,sizeof(t));
        int n = s.length();
        int m = 0;
        int sp = 0;
        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {
                if (solve(i, j, s)) {
                    if (j - i + 1 > m) {
                        m = j - i + 1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp, m);
    }
};