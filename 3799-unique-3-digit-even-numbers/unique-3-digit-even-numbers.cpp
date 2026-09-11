class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        int c=0;
        vector<int>a(10,0);
        for(int i=0;i<n;i++){
            a[digits[i]]++;
        }
        for(int i=1;i<=9;i++){
            if(a[i]==0)continue;
            a[i]--;
            for(int j=0;j<=9;j++){
                if(a[j]==0)continue;
                a[j]--;
                for(int k=0;k<=8;k+=2){
                    if(a[k]==0)continue;
                    a[k]--;
                    c++;
                    a[k]++;
                }
                a[j]++;
            }
            a[i]++;
        }
        return c;
    }
};