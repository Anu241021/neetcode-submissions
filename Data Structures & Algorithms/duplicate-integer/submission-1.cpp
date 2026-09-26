class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        for (auto i : nums) m[i]++;
        for (auto i:m) {
            if (i.second >= 2) return true;
        }
        return false;
    }
};