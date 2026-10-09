class Solution {
public:
    int minInsertions(string s) {
        // stack<char>st;
        int open=0;
        int step=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                // st.push('(');
                open++;
            }
            else{
                if(i+1<s.length() && s[i+1]==')'){
                    // if(st.empty()){
                    //     step+=1;
                    // }else{
                    //     st.pop();
                    // }
                    if(open==0){
                        step+=1;
                    }else{
                        open--;
                    }
                    i++;
                }
                else{
                    // if(st.empty()){
                    //     step+= 2;
                    // }else{
                    //     st.pop();
                    //     step+=1;
                    // }
                    if(open==0){
                        step+=2;
                    }else{
                        open--;
                        step+=1;
                    }
                }
            }


        }
        // while(!st.empty()){
        //     step+=2;
        //     st.pop();
        // }
        step+=2*open;
        return step;
    }
};