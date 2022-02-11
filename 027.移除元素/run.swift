//
//  main.swift
//  leetcode_swift
//
//  Created by feifeiwei on 2021/12/27.
//

import Foundation

class Solution {
    func removeElement(_ nums: inout [Int], _ val: Int) -> Int {

        var ins=0
        for i in 0..<nums.count{
            if nums[i] != val{
                nums[ins] = nums[i]
                ins += 1
            }
            
        }
        
        return ins
    }
}



var nums = [0,1,2,2,3,0,4,2]
let val = 2

let run = Solution()
let res = run.removeElement(&nums, val)

print(res)
print(nums)




