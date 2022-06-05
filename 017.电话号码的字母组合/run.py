#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May 27 23:16:04 2022

@author: feifeiwei
"""
        
class Solution:
    def letterCombinations(self, digits):
        if not digits: return []
        phone = ['abc','def','ghi','jkl','mno','pqrs','tuv','wxyz']
        queue = ['']  # 初始化队
        
        
        for digit in digits:
            for _ in range(len(queue)):
                tmp = queue.pop(0)
                for letter in phone[ord(digit)-50]:# 这里我们不使用 int() 转换字符串，使用ASCII码
                    queue.append(tmp + letter)
        return queue

                      
    
if __name__=="__main__":
    nums = [-1,2,1,-4,1,1,-1]
    
    target = 1
    
    s = Solution()
    res = s.letterCombinations('234')
    print(res)
    
