class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        ans=0
        cur=0
        curr=""
        for i in s:
            if(i not in curr):
                curr=curr+i
                cur+=1
                ans=max(cur,ans)
            else:
                pos = curr.index(i)
                curr = curr[pos + 1:] + i
                cur = len(curr)
                ans = max(cur, ans)
        return ans