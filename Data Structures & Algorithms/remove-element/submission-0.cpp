class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size()-1;
        while (i<=j && i<nums.size() && j>=0) {
            if (nums[i]==val && nums[j]!=val) {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else if (nums[i]==val) {
                j--;
            }
            else {
                i++;
            }
        }
        return i;
    }
};