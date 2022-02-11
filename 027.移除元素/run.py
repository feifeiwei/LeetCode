#!python3


class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        ins = 0

        for i in range(len(nums)):

            if nums[i] != val:
                nums[ins] = nums[i]
                ins += 1


        return ins




if __name__=="__main__":
    nums = [0,1,2,2,3,0,4,2]
    val = 2

    run = Solution()

    print(run.removeElement(nums, val))

    print(nums)





