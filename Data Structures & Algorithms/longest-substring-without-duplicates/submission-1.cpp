class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int n = s.size();
        int l = 0;
        int r = 0;
        int ans = 0;
        for (r;r<n;r++) {
            m[s[r]]++;
            while (m[s[r]]>1) {
                m[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
