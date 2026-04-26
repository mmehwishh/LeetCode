class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        p1(ans , 0 , 0 , n , "");
        return ans;
    }
    void p1(vector<string>&ans , int open , int close , int n , string current_str) {
        if (current_str.length() == n*2) {
            ans.push_back(current_str);
            return;
        }
        if (open < n) {
            p1(ans , open+1 , close , n , current_str+"(");
        }
        if(open > close) {
            p1(ans , open , close+1 , n , current_str+")");
        }
    }
};