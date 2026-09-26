class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a = 0, b = 0;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == a) {
                c1++;
            } else if (nums[i] == b) {
                c2++;
            } else if (c1 == 0) {
                a = nums[i];
                c1++;
            } else if (c2 == 0) {
                b = nums[i];
                c2++;
            } else {
                c1--;
                c2--;
            }
        }
        c1 = 0;
        c2 = 0;
        for (int it : nums) {
            if (it == a) {
                c1++;
            } else if (it == b) {
                c2++;
            }
        }
        vector<int> ans;
        if (c1 > nums.size() / 3)
            ans.push_back(a);
        if (c2 > nums.size() / 3)
            ans.push_back(b);
        return ans;
    }
};