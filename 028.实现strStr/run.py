class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        self.hatstack = haystack
        len = len(needle)
        a = needle[0]


        for i in range(len(haystack)):
            
            if haystack[i:i+len] == needle:
                return i
        return -1 




if __name__=="__main__":

    run = Solution()
    haystack = "hello"
    needle = "ll"
    print(run.strStr(haystack, needle))


