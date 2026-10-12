class Solution {
public:
    int find(int num,int l,int h){
        
        while(l<=h){
            int m =l+(h-l)/2;
            long long  a= 1LL*m*m ;
            if(a== num){
                return m;
            }
            else if(a<num){
               
                l=m+1;
            }
            else{
                h=m-1;
            }

        }
        return l-1;
    }
    int mySqrt(int x) {
        int a;
        if(x<2) return x;
        // for(long long i=1;i*i<=x;i++){
        //     if(i*i<=x){
        //         a=i;
        //     }
            
        // }
        // return a;
        return find(x,1,x/2);
    }
};