class Solution {
public:
    vector<int> majorityElement(vector<int>& num) {
        map<int,int> m;
        for (auto i:num) {
            m[i]++;
        }
        vector<int> res;
        for (auto i:m) {
            if (i.second>num.size()/3) {
                res.push_back(i.first);
            }
        }
        return res;
    }
};