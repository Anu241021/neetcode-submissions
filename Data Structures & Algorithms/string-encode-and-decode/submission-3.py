class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded=""
        for x in strs:
            encoded+=str(len(x))+'#'+x
        return encoded
    def decode(self, s: str) -> List[str]:
        decoded = []
        i=0
        while i<len(s):
            j=s.find('#',i)
            start = j+1
            length = int(s[i:j])
            decoded.append(s[start:start+length])
            i=start+length
        return decoded
