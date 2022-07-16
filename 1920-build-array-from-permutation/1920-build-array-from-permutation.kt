class Solution {
    fun buildArray(nums: IntArray): IntArray {
        var ans = MutableList(nums.size){0}
        for (i in 0..nums.size-1){
            ans[i]=nums[nums[i]]
        }        
        return ans.toIntArray()
    }
}