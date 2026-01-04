class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>res;
        int l =0;
        int ans = 0;
        for(int r = 0 ; r < s.length() ; r++) {
            while(res.contains(s[r])) {
                res.erase(s[l]);
                l++;
            }
            res.insert(s[r]);
            ans = max(ans , r-l+1);
        }
        return ans;
    }
};