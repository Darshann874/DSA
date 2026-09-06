
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int a = INT_MAX;
        int n = nums.size();

        vector<int> ps(n);
        ps[0] = nums[0];

        for (int i = 1; i < n; i++) {
            ps[i] = ps[i - 1] + nums[i];
        }

        int i = 0;
        int j = 0;

        while (j < n) {

            int sum;

            if (i == 0)
                sum = ps[j];
            else
                sum = ps[j] - ps[i - 1];

            if (sum >= target) {
                a = min(a, j - i + 1);
                i++;
            }
            else {
                j++;
            }

            if (i > j)
                j++;
        }

        return a == INT_MAX ? 0 : a;
    }
};
