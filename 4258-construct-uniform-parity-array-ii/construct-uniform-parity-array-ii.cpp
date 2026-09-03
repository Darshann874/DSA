class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int ev = 0;
        int od = 0;
       
        int mo = INT_MAX;
        for (auto it : nums1) {
            if (it % 2 == 0) {
                ev++;
                
            } else {
                od++;
                mo = min(mo, it);
            }
        }
        if (ev == n || od == n){
            return true;
        }
        bool ans=true;
        // All odd
        for(int a:nums1){
            if(a%2==0){
                if((a-mo )<1) ans=false;
            }
        }
        
        return ans;
    }
};