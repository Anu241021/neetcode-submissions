class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> p(n+1,0);
        for (int i=1;i<n+1;i++) {
            p[i]=p[i-1]+nums[i-1];
        }
        int count = 0;
        for (int i=0;i<n;i++) {
            for (int j=i;j<n;j++) {
                if (p[j+1]-p[i]==k) {
                    cout<<p[i]<<" "<<p[j+1]<<endl;
                    count++;
                }
            }
        }
        return count;
    }
};