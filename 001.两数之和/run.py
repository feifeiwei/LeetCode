class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        #self.nums = nums
        #self.target = target
        ac = {}

        for i, n in enumerate(nums):
            if n not in ac:
                ac[target-n] = i
            else:
                return [i, ac[n]]


    #def test(self, self.nums, self.target):








if __name__=="__main__":

    run = Solution()
    nums = [2,7,11,15]
    target = 9
    print(run.twoSum(nums, target))


