//: A UIKit based Playground for presenting user interface
  
import Foundation


class Solution {
    func lengthOfLongestSubstring(_ s: String) -> Int {

        var D:[Character:Int] = [:]
        
        var start = 0
        var maxLen:Int = 0
        let sArray = Array(s)
        
        for (i, cur_str) in sArray.enumerated(){ // faster:
//        for i in 0..<s.count{  // slow!
//            let index = s.index(s.startIndex, offsetBy: i) // slow
//            let cur_str = s[index]

            
            if D.keys.contains(cur_str) && start <= D[cur_str]!{
                start = D[cur_str]! + 1
            }
            else{
                maxLen = max(maxLen, i-start+1)
            }
            
            D[cur_str] = i
            
        }
        return maxLen

    }
}
