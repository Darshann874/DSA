class Solution {
public:
    // int add(vector<int>&arr ,int i,int j){
    //     int sum=0;
    //     while(i<=j){
    //         sum+=arr[i];
    //         i++;
    //     }
    //     return sum;
    // }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum= 0;
        int n=arr.size();
        // for(int i=0;i<arr.size();i++){
        //     int j=i;
        //     while(j<n){
        //     if((j-i+1)%2!=0){
        //         sum+=add(arr,i,j);
                
        //     }
        //     j++;
        //     }
        // }
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-i;
            int o_len = (left*right +1)/2;
            sum+=o_len * arr[i];
        }
        return sum;
    }
};