class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // intervals.push_back(newInterval);
        // sort(intervals.begin(),intervals.end());
        int i=0;
        while(i<intervals.size() && intervals[i][0]<newInterval[0]){
            i++;
        }
        intervals.insert(intervals.begin()+i,newInterval);
        vector<int>temp;
        vector<vector<int>>ans;
        temp=intervals[0];
        for(auto it:intervals){
            if(it[0]<=temp[1]){
                temp[1]=max(it[1],temp[1]);
            }
            else{

                ans.push_back(temp);
                temp=it;
            }
        }
        ans.push_back(temp);

        return ans;     
    }
};