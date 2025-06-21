class Solution {
public:
//2.longest substring without duplicate but no window size 
//Track of duplicates[remove duplicate] , move forward[track max]
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int left=0;
        int maxSum=0;
        for(int right=0;right<s.size();right++){
            while(window.count(s[right])){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);
            maxSum=max(maxSum,right-left+1);
        }
        return maxSum;
    }
};
