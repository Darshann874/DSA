class Solution {
public:
    int solve(int n){
        int sum=0;
        while(n){
            int i=n%10;
            sum +=i*i;
            n=n/10;

        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>mp;
        while (n != 1) {
            n=solve(n);
            if(mp.find(n)!=mp.end()){
                return false;
            }
            mp.insert(n);
        }
        return true;
    }
};