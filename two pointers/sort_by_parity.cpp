class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0;
        int right=nums.size();
        int k=0;
        vector<int> ans(right);
        right=right-1;
        while(k<nums.size()){
            if(nums[k]%2==0){
                ans[left++]=nums[k];
            }
            else{
                ans[right--]=nums[k];
            }
            k++;
        }
        return ans;
    }
};
