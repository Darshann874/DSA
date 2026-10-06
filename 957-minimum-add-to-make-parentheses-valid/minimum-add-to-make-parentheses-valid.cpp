class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        int o=0;
        // stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                // st.push(s[i]);
                o++;
            }
            else{
                // if(!st.empty()&& st.top()=='('){
                //     st.pop();
                // }else{
                //     c++;
                // }
                if(o>0){
                    o--;
                }else{
                    c++;
                }
            }
        }
        // while(!st.empty()){
        //     c++;
        //     st.pop();
        // }
        return c+o;
    }
};