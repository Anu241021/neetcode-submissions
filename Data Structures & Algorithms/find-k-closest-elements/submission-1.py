class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        d = []
        for i in range(len(arr)):
            d.append([abs(arr[i]-x),arr[i]])
        heapq.heapify(d)
        ans = []
        while k:
            ans.append(heapq.heappop(d)[1])
            k-=1
        ans.sort()
        return ans