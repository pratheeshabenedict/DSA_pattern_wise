class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int left=0;
        int sum=0;
        int minSum=INT_MAX;
        for(int right=0;right<arr.size();right++){
            sum+=arr[right];
            while(sum>x){
                minSum=min(minSum,right-left+1);
                sum-=arr[left];
                left++;
            }
        }
        return (minSum==INT_MAX) ? 0 : minSum;
    }
};
