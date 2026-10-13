class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // unordered_set<int> st;
        // vector<int> ans;
        // int sum = 0;
        // int x;
        int n = grid.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         sum += grid[i][j];
        //         if (st.find(grid[i][j]) != st.end()) {
        //             ans.push_back(grid[i][j]);
        //             x = grid[i][j];
        //         } else {
        //             st.insert(grid[i][j]);
        //         }
        //     }
        // }
        // long long N = 1LL * n * n;
        // long long total_sum = N * (N + 1) / 2;

        // int s = total_sum + x - sum;
        // ans.push_back(s);

        // return ans;
        vector<int> arr(n*n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=grid[i][j]-1;
                arr[x]++;
            }
        }
        int missing;
        int repeating;

        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                missing=i+1;
            }
            if(arr[i]==2){
                repeating =i+1;
            }
        }
        
        return {repeating,missing};
    }
};