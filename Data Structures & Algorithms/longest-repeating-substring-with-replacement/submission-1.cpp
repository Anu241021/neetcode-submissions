class Solution {
public:
    int characterReplacement(string s, int k) {
        map<int,int> m;
        int n = s.size();
        int l = 0;
        int r = 0;
        int mx = 0;
        int ans = 0;
        for (r;r<n;r++) {
            m[s[r]]++;
            mx = max(mx,m[s[r]]);
            while (r-l+1-mx>k) {
                m[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
