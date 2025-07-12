class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        int left=0;
        int right=nums.size()-1;
        vector<int> ans;
        while(left<right){
            sum=nums[left]+nums[right];
            if(sum>target){
                right--;
            }          
            else if(sum<target){
                left++;
            }
            else{
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }        
        }
        return ans;
    }
};
