// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        //Here we need keep track of window size of characters
        //check for expand and shrink , also make sure that as this is map erase
        unordered_map<char,int> window;
        int left=0;
        int maxSum=0;
        for(int right=0;right<s.size();right++){
            window[s[right]]++;
            while(window.size()>k){
                window[s[left]]--;
                if(window[s[left]]==0){
                    window.erase(s[left]);
                }
                left++;
            }
            if(window.size()==k){
                maxSum=max(maxSum,right-left+1);
            }
        }
        return (maxSum==0) ? -1 : maxSum;
    }
};
