class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        def solve(numbers,target):
            l=0
            r=len(numbers)-1
            while l<=r:
                mid = l + (r-l)//2
                if numbers[mid]==target:
                    return mid
                elif numbers[mid]<target:
                    l=mid+1
                else:
                    r=mid-1
            return -1
        for i in range(len(numbers)):
            x = solve(numbers,target-numbers[i])
            if x!=-1 and x!=i:
                return [i+1,x+1] if i<x else [x+1,i+1]
        return []