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