class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        while (i<n) {
            nums1[m+i]=nums2[i];
            i++;
        }
        for (int i=1;i<m+n;i++) {
            int key = nums1[i];
            int j = i-1;
            while (j>=0 and nums1[j]>key) {
                nums1[j+1]=nums1[j];
                j-=1;
            }
            nums1[j+1]=key;
        }
    }
};