/* Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Initialize with 'n' because the loop index 'i' only goes up to n-1
        int missing = nums.size();
        
        for (int i = 0; i < nums.size(); i++) {
            // XOR the current index and the current value
            missing ^= i ^ nums[i];
        }
        
        return missing;
    }
};