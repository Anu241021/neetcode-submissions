class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower().replace(" ","")
        print(s)
        st=""
        for i in s:
            if i.isalnum():
                st+=i
        i=0
        j=len(st)-1
        while i<j:
            if st[i]!=st[j]:
                return False
            i+=1
            j-=1
        return True