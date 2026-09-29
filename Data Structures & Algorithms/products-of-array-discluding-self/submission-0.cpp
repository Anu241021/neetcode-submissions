class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n+1,1);
        for (int i=1;i<n;i++) {
            p[i]=nums[i-1]*p[i-1];
        }
        vector<int> s(n+1,1);
        //return p;
        for (int i=n-2;i>=0;i--) {
            s[i]=nums[i+1]*s[i+1];
        }
        vector<int> res;
        for (int i=0;i<n;i++) {
            res.push_back(s[i]*p[i]);
        }
        return res;
    }
    // s 48 24 6 1 1
    // p 1  1  2 8 1

};
