class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 101;
        int ans = 0;
        for (auto x:prices) {
            m=min(m,x);
            cout<<x<<m<<endl;
            ans=max(ans,x-m);
        }
        return ans;    
    }
};
