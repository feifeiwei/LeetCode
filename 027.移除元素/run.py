#!python3
# Definition for singly-linked list.
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        if len(nums)==0:
            return 0



        slow = 0

        for i in range(1, len(nums)):
            if nums[i] != nums[slow]:
                slow += 1
                nums[slow] = nums[i]

        return slow + 1




if __name__=="__main__":
    #输入：nums = [0,0,1,1,1,2,2,3,3,4]
    #输出：5, nums = [0,1,2,3,4]

    nums = [0,0,1,1,1,2,2,3,3,4]

    run = Solution()

    print(run.removeDuplicates(nums))

    print(nums)





