class Solution:

    def encode(self, strs: List[str]) -> str:
        ans=""
        for i in strs:
            a=len(i)
            ans+=str(a)
            ans+='='
            ans+=i
            ans+='='
        return ans


    def decode(self, s: str) -> List[str]:
        res=[]
        dec=s.split('=')
        for i in range(1,len(dec),2):
            res.append(dec[i])
        return res

