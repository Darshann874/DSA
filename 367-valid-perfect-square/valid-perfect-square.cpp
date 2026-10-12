class Solution {
public:
    bool isSquare(int num,int l,int r){
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long a= 1LL*mid*mid;
            if(a==num) return true;
            else if(a>num){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        
        return isSquare(num,1,num/2);
        
    }
};