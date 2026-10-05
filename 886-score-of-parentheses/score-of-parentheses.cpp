class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(c);
                c=0;
            }
            else{
                if(s[i-1]=='('){
                    c=st.top()+1;
                }

                else{
                    c=st.top()+(2*c);
                }
                st.pop();
            }
        }
        return c;
    }
};