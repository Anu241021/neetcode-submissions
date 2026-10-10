class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> h;
        int l = 0;
        vector<int> ans;
        for (int r=0;r<nums.size();r++) {
            h.push({nums[r],r});
            //cout<<h.top().first<<" "<<h.top().second<<endl;
            if (r-l==k-1) {
                //cout<<h.top().first<<" "<<h.top().second<<endl;
                //cout<<l<<endl;
                while (h.top().second<l) h.pop();
                //cout<<h.top().first<<" "<<h.top().second<<endl;
                ans.push_back(h.top().first);
                l+=1;
            }
        }
        //if (h.top().second<=l) h.pop();
        return ans;
    }
};
