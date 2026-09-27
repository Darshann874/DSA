class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            int a=(i+1)%3;
            int b=(i+1)%5;
            if(a==0 && b==0){
                ans[i]="FizzBuzz";
            }
            else if(a==0){
                ans[i]="Fizz";

            }
            else if(b==0){
                ans[i]="Buzz";
            }
            else{
                ans[i]=to_string(i+1);
            }
        }
        return ans;

    }
};