//
//  main.swift
//  leetcode_swift
//
//  Created by feifeiwei on 2021/12/27.
//

import Foundation

class Solution {
    func removeDuplicates(_ nums: inout [Int]) -> Int {

        if nums.count==0{
            return 0
        }
        
        var slow = 0
        
        for fast in 1..<nums.count{
            if nums[slow] != nums[fast]{
                slow += 1
                nums[slow] = nums[fast]
            }
        }
        
        return slow+1
        
        
    }
}

var nums:[Int] = [0,0,1,1,1,2,2,3,3,4]
let run = Solution()
let res = run.removeDuplicates(&nums)

print("res: ", res)
for i in 0..<res{
    print(nums[i])
}






