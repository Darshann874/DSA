class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int l = s.length();
        int i = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {

                if (st.empty())
                    return false;
        
            if (st.top() == '{' && s[i] == '}') {
                st.pop();

            } else if (st.top() == '[' && s[i] == ']') {
                st.pop();

            } else if (st.top() == '(' && s[i] == ')') {
                st.pop();

            } else
                return false;
        }
        }
        return st.empty();
    }
};