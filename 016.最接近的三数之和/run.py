#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May 27 23:16:04 2022

@author: feifeiwei
"""

class Solution:
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums = sorted(nums)
        
        print(nums)
        
        min_ = float('inf')
        sum_ = 0
        tmp_sum = 0
        
        
        for i in range(0, len(nums)):
            b = i+1
            e = len(nums)-1
            
            while b<e:
                tmp_sum = nums[i] + nums[b] + nums[e]
                if tmp_sum == target:
                    return target
                elif abs(tmp_sum - target) < min_:
                    min_ = abs(tmp_sum - target)
                    sum_ = tmp_sum
                
                if tmp_sum > target:
                    e -= 1
                else:
                    b += 1
                    
        return sum_
            
            
            
                
            
    
if __name__=="__main__":
    nums = [-1,2,1,-4]
    
    target = 1
    
    s = Solution()
    res = s.threeSumClosest(nums, target)
    
