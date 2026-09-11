class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        // vector<int>la(n);
        // vector<int>ra(n);
        // int ans=0;
        // la[0]=1;
        // for(int i=1;i<n;i++){
        //     if(ratings[i]>ratings[i-1]){
        //         la[i]=la[i-1]+1;

        //     }else la[i]=1;
        // }
        // ra[n-1]=1;
        // for(int i=n-2;i>=0;i--){
        //     if(ratings[i]>ratings[i+1]){
        //         ra[i]=ra[i+1]+1;
        //     }
        //     else{
        //         ra[i]=1;
        //     }
        // }
        // for(int i=n-1;i>0;i--){

        //     ans+=max(la[i],ra[i]);

           
        // }
        int i=1;
        int sum=1;
        while(i<n){
            while(i<n && ratings[i]==ratings[i-1]){
                i++;
                sum++;
                continue;

            }
            int peak=1;
            while(i<n && ratings[i]>ratings[i-1]){
                peak++;
                sum+=peak;
                i++;

            }
            int d=1;
            while(i<n && ratings[i]<ratings[i-1]){
                sum+=d;
                d++;
                i++;
            }
            if(peak<d){
                sum+=d-peak;
            }
        }
        // return ans;
        return sum;

        
    }
};