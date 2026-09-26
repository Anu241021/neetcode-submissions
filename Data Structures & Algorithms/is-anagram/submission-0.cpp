class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        int c[26] = {0};
        for (auto i:s) c[i-'a']++;
        for (auto i:t) c[i-'a']--;
        for (auto i:c) {
            if (i!=0) return false;
        }
        return true;
    }
};
