//: A UIKit based Playground for presenting user interface
  
class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {

        var dict = [Int : Int]()
        for (idx, val) in nums.enumerated(){
            if dict.keys.contains(val){
                let j = dict[val]!
                return [idx, j]
                
                //return [idx, dict[idx]!]
            }
            else{
                dict[target - val] = idx
            }
            
        }
        return []
    }

}


let run = Solution()
let nums:[Int] = [2,7,11,15]
let target = 9
let res = run.twoSum(nums, target)




