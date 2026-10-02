class Solution:
    def validPalindrome(self, s: str) -> bool:
        def solve(st,l,r):
            i=l
            j=r
            while i<j:
                if st[i]!=st[j]:
                    return False
                i+=1
                j-=1
            return True
        i=0
        j=len(s)-1
        while i<j:
            if s[i]!=s[j]:
                return solve(s,i,j-1) or solve(s,i+1,j)
            i+=1
            j-=1
        return True