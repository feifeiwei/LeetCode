#!python3

class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        D = {}
        maxLen = 0
        start = 0

        for idx, item in enumerate(s):

            if item in D and start <= D[item]:
                start = D[item] + 1
                print(idx, start)
            else:
                maxLen = max(maxLen, (idx-start+1))

            D[item] = idx
        return maxLen






if __name__=="__main__":
    
     s = "tmmzuxt"
     s = "abcabcbb"
     s = '"tmmzuxt"'

     run = Solution()

     ll = run.lengthOfLongestSubstring(s)
     print(ll)







