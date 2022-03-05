#!python3

class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        
        if numRows==1 or numRows >= len(s):
            return s
        L = ['']*numRows
        step = 1
        index = 0
        for  x in (s):
            L[index] += x
            
            if index == 0:
                step = 1
            elif index == numRows-1:
                step = -1
  
            index += step
        #print(L)
        return ''.join(L)
        
        
        
        
if __name__=="__main__":
    
    s = "PAYPALISHIRING"
    numRows = 4
    run = Solution()
    run.convert(s, numRows)







