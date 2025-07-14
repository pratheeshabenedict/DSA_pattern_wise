class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         unordered_map<int, int> prefixSumCount;
        int currentSum = 0;
        int result = 0;
        prefixSumCount[0] = 1;

        for (int num : nums) {
            currentSum += num;
            if (prefixSumCount.find(currentSum - goal) != prefixSumCount.end()) {
                result += prefixSumCount[currentSum - goal];
            }
            prefixSumCount[currentSum]++;
        }

        return result;
    }
}; 
