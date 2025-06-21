class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> t_count;
        for(char i : t){
            t_count[i]++;
        }
        int required=t_count.size();
        int start=0;
        int left=0;
        int right=0;
        int minLen=INT_MAX;
        int formed=0;
        unordered_map<char,int>window;
        while(right<s.size()){
            char c = s[right];
            window[c]++;
            if(t_count.count(c) && window[c]==t_count[c]){
                formed++;
            }
            while(left<=right && required==formed){
                if(minLen>right-left+1){
                    minLen=right-left+1;
                    start=left;
                }
                char l_char=s[left];
                window[l_char]--;
                if(t_count.count(l_char) && window[l_char]<t_count[l_char]){
                    formed--;
                }
                left++;
            }
            right++;
        }
        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
