class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        make_heap(nums.begin(),nums.end());
        vector<int> res;
        while (!nums.empty()) {
            res.push_back(nums.front());
            pop_heap(nums.begin(),nums.end());
            nums.pop_back();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};