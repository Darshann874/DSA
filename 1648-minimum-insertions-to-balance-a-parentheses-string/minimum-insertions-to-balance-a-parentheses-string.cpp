class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int step=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(i+1<s.length() && s[i+1]==')'){
                    if(st.empty()){
                        step+=1;
                    }else{
                        st.pop();
                    }
                    i++;
                }
                else{
                    if(st.empty()){
                        step+= 2;
                    }else{
                        st.pop();
                        step+=1;
                    }
                }
            }


        }
        // while(!st.empty()){
        //     step+=2;
        //     st.pop();
        // }
        step+=2*st.size();
        return step;
    }
};