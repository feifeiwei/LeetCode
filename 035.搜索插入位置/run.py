class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        left = 0
        right = len(nums)-1

        while(left <= right):
            mid = left + (right-left)//2
            mid_value = nums[mid]
            if mid_value > target:
                right = mid - 1
            elif mid_value < target:
                left = mid + 1
            else:
                return mid
        

        return right+1







if __name__=="__main__":

    run = Solution()
    nums = [1,3,5,6]
    target = 5
    print(run.searchInsert(nums, target))


