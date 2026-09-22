class Solution {
public:
    // int solve(vector<int>&ans){
    //     if(ans.size()==1){
    //         return ans[0];
    //     }
    //     int n=ans.size();
    //     vector<int>t;
    //     for(int i=1;i<n;i+=2){
    //         t.push_back(ans[i]);
    //     }
    //     reverse(t.begin(),t.end());
    //     return solve(t);

    // }
    int lastRemaining(int n) {
        // vector<int>ans;
        // for(int i=1;i<=n;i++){
        //     ans.push_back(i);
        // }
        // return solve(ans);
        int start=1;
        int step=1;
        bool left =true;
        int remains=n;
        while(remains>1){
            if(left || remains%2==1){
                start+=step;
            }
            remains/=2;
            step*=2;
            left=!left;
        }
        return start;
    }
};