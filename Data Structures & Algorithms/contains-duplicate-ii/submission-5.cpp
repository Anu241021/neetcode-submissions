class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> m;
        int cnt = -1;
        for (int i=0;i<k+1 && i<n;i++) {
            m[nums[i]]++;
            cnt=max(cnt,m[nums[i]]);
            cout<<cnt<<endl;
            if (cnt>1) return true;
        }
        for (int i=k+1;i<n;i++) {
            m[nums[i-k-1]]--;
            m[nums[i]]++;
            cnt = max(m[nums[i]],cnt);
            cout<<cnt<<endl;
            if (cnt>=2) return true;
        }
        return false;
    }
};