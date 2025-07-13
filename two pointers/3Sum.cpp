class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sum=0;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                if(sum>0) k--;
                else if(sum<0) j++;
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    j++;
                    k--;
                    ans.push_back(temp);
                    while(j<nums.size() && nums[j]==nums[j-1]) j++;
                    while(k<nums.size() && nums[k]==nums[k+1]) k--;
                } 
            }
        }
         return ans;
    }
};
