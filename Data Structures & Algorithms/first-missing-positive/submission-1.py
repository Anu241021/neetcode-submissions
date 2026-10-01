class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        d=defaultdict(int)
        for x in nums:
            d[x]+=1
        ans=1
        while d[ans]>0:
            ans+=1
        return ans

        