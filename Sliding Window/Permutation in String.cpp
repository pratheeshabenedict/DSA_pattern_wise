class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> s1_count(26,0) , window_count(26,0);
        for(char c : s1){
            s1_count[c-'a']++;
        }
        int req=s1.size();
        for(int i=0;i<s2.size();i++){
            window_count[s2[i]-'a']++;
            if(i>=req)
                window_count[s2[i-req]-'a']--;
            if(s1_count==window_count) return true;   
        }
        return false;
    }
};
