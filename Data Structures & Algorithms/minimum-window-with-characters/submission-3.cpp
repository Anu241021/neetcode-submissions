class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> d(128, 0);

        for (char c : t) {

            d[(unsigned char)c]++;

        }

        int missing = t.size();

        int l = 0, start = 0;

        int ans = INT_MAX;

        for (int r = 0; r < s.size(); r++) {

            int idx = (unsigned char)s[r];

            if (d[idx] > 0) {

                missing--;

            }

            d[idx]--;

            while (missing == 0) {

                if (r - l + 1 < ans) {

                    start = l;

                    ans = r - l + 1;

                }

                int left_idx = (unsigned char)s[l];

                d[left_idx]++;

                if (d[left_idx] > 0) {

                    missing++;

                }

                l++;

            }

        }

        if (ans == INT_MAX) return "";

        return s.substr(start, ans);
    }
};
