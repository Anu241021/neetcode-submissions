class Solution {
public:
    bool checkPerm(string s1,map<char,int> a,map<char,int> b) {
        for (auto x:s1) {
            if (a[x]!=b[x]) {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        map<char,int> m1;
        for (auto x:s1) m1[x]++;
        int l = 0;
        int n = s2.size();
        map<char,int> m2;
        for (int r = 0;r<n;r++) {
            if (r>=s1.size()) {
                m2[s2[l]]--;
                l++;
            }
            m2[s2[r]]++;
            cout<<m2[s2[r]]<<endl;
            if (checkPerm(s1,m1,m2)) return true;
        }
        return false;
    }
};
