class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length()<=numRows || numRows==1) {
            return s;
        }
        //TC: O(n) worst time O(n^2)
        vector<vector<char>> res(numRows, vector<char>(s.length(), ' '));
        int i =0 ;
        int ai = 0;
        int aj = 0;

        while (i < s.length()) {
            while (ai <numRows && i < s.length()) {
                res[ai][aj] = s[i];
                
                i++; ai++;
               
            }
            ai-=2;
            aj++;
       
            while (ai > 0 && i < s.length()) {
                
                res[ai][aj] = s[i];
                
                ai--; aj++;
                i++;
            }
        }
        string ans = "";
        for (int r = 0; r < numRows; r++) {
            for (int c = 0; c < s.length(); c++) {
                if (res[r][c] != ' ')
                    ans += res[r][c];
            }
        }

        return ans;
    }
};