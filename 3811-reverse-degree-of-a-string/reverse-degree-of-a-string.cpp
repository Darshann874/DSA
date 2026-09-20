class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            int r=26-(s[i]-'a');
            int a=i+1;
            sum+=r*a;
        }
        return sum;
    }
};