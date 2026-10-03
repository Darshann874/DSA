class Solution {
public:
    int longestValidParentheses(string s) {
        int c=0;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<s.size();i++){
            // if(st.empty()){
            //     st.push(s[i]);
            // }
            // else if(s[i]=='('){
            //     st.push(s[i]);
            // }else if(s[i]==')'&& st.top()=='('){
            //     st.pop();
            //     c+=2;
            // }
            if(s[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }else{
                    c=max(c,i-st.top());
                }
            }

        }
        return c;
    }
};