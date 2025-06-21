//how fast can we get a job by means of consultancy
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> window;
        long long maxSum =0 ;
        long long windowSum=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            while(window.count(nums[right])){
                windowSum-=nums[left];
                window.erase(nums[left]);
                left++;
            }
            window.insert(nums[right]);
            windowSum+=nums[right];
            if(right-left+1==k){
                maxSum=max(maxSum,windowSum);
                windowSum-=nums[left];
                window.erase(nums[left]);
                left++;
            }
        }
        return maxSum;
    }
};
