class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(!st.empty()&& st.top()=='('){
                    st.pop();
                }else{
                    c++;
                }
            }
        }
        while(!st.empty()){
            c++;
            st.pop();
        }
        return c;
    }
};