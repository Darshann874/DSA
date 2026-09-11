class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>la(n);
        vector<int>ra(n);
        int ans=0;
        la[0]=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                la[i]=la[i-1]+1;

            }else la[i]=1;
        }
        ra[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                ra[i]=ra[i+1]+1;
            }
            else{
                ra[i]=1;
            }
        }
        for(int i=0;i<n;i++){
            ans+=(max(la[i],ra[i]));
        }
        return ans;
        
    }
};