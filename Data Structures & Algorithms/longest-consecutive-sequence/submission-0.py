class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        d = Counter(nums)
        ans=0
        for i in nums:
            res=1
            if d[i-1]==0:
                k=i+1
                while d[k]>0:
                    res+=1
                    k+=1
                ans=max(ans,res)
        return ans
        