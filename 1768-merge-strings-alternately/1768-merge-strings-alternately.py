class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        n = len(word1)
        m = len(word2)
        ans = []
        
        for i in range(min(n,m)):
            ans.append(word1[i])
            ans.append(word2[i])
           

        if(n>m):
            ans.append(word1[m:])
        else:
            ans.append(word2[n:])

        return "".join(ans)
         