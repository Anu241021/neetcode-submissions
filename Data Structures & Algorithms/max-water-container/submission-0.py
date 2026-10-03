class Solution:
    def maxArea(self, heights: List[int]) -> int:
        i=0
        j=len(heights)-1
        ans=0
        while i<j:
            if heights[i]<=heights[j]:
                ans=max(heights[i]*(j-i),ans)
                i+=1
            else:
                ans=max(heights[j]*(j-i),ans)
                j-=1
        return ans

        