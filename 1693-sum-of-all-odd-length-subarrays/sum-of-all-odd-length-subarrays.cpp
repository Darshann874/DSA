class Solution {
public:
    int add(vector<int>&arr ,int i,int j){
        int sum=0;
        while(i<=j){
            sum+=arr[i];
            i++;
        }
        return sum;
    }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum= 0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            int j=i;
            while(j<n){
            if((j-i+1)%2!=0){
                sum+=add(arr,i,j);
                
            }
            j++;
            }
        }
        return sum;
    }
};