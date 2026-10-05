class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();
        int ans = INT_MAX;
        for (r;r<n;r++) {
            s+=nums[r];
            //cout<<s<<endl;
            while (s-nums[l]>=target) {
                s-=nums[l];
                l++;
            }
            //cout<<s<<endl;
            cout<<r<<l<<endl;
            if (s>=target) ans = min(ans,r-l+1);
        }
        if (ans==INT_MAX) return 0;
        return ans;
    }
};