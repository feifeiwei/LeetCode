#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May 27 23:16:04 2022

@author: feifeiwei
"""

class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        
        count = len(nums)
        if count < 3:
            return []
        
        nums.sort()
        
        res = []
        
        for i in range(count):
            if nums[i] > 0:
                return res
            
            if i>0 and nums[i]==nums[i-1]:
                continue

            L = i+1
            R = count-1
            
            while L<R: 
                if nums[i] + nums[L] + nums[R] == 0:
                    res.append([nums[i], nums[L], nums[R]])
                    
                    while L < R and nums[L] == nums[L+1]:
                        L += 1
                    while L < R and nums[R] == nums[R-1]:
                        R -= 1
                    L += 1
                    R -= 1
                    
                elif nums[i] + nums[L] + nums[R] > 0:
                    R -= 1
                else:
                    L += 1
                    
            
        return res
        
        
        
        
            
            
                
            
    
if __name__=="__main__":
    nums = [-1,2,1,-4,1,1,-1]
    
    target = 1
    
    s = Solution()
    res = s.threeSum(nums)
    print(res)
    