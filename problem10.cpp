class Solution {
public:
    vector<vector<int>> dp;
    bool solve ( int i , int j , string s , string p ) {
         if (dp[i][j] != -1)
            return dp[i][j];
            
        if ( j >= p.length() ) {
            return dp[i][j] = (i == s.length());
        }

        bool matched = ( i < s.length() && (s[i]==p[j] || p[j] == '.'));

        if ( j+1 <  p.length()  && p[j+1] == '*') {
            bool not_take = j+2 <=  p.length() && solve(i , j+2 , s , p );
            bool take =  matched && solve(i+1 , j , s , p );

            return dp[i][j] =  (take || not_take);
        }
        
         return dp[i][j] =  (matched && solve ( i+1 , j+1 , s , p ));

    }
    bool isMatch(string s, string p) {
         dp.assign(s.length() + 1, vector<int>(p.length() + 1, -1));
        return solve(0 , 0 , s , p );
    }
};