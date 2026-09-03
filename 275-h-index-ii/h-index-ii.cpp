class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int h=citations.size()-1;
        int l=0;
        int ans=0;
        while(l<=h){
            int m=l+(h-l)/2;
            if(citations[m]>=n-m){
                ans=n-m;
                h=m-1;
            }else{
                l=m+1;
            }
            
        }
        return ans;
    }
};