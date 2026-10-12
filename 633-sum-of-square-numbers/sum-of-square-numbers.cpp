class Solution {
public:
    bool judgeSquareSum(int c) {
        int a=sqrt(c);
        int x=0;
        while(x<=a){
            long long s= 1LL* x*x +a*a;
            if(s==c){
                return true;
            }
            else if(s<c){
                x++;
            }else{
                a--;
            }
        }
        return false;
    }
};