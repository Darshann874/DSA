class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m =prices[0];
        int p=0;
        for(int t=1;t<prices.size();t++){
            m=min(m,prices[t]);
            p=max(p,prices[t]-m);
        }
        return p;
    }
};