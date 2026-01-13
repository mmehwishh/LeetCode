class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        long res = 0;
        int i =0;
            while(s[i]==' ' && i<s.length()) {
                i++;
            }
            if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
                if (s[i] == '-') sign = -1;
                i++;
            }
            while(s[i]>='0' && s[i]<='9' &&i<s.length()) {
                int digit =  (s[i]-'0');
                if (res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > 7)) {
                    return sign == 1 ? INT_MAX : INT_MIN;
                }
                res = res*10 + digit;
                i++;
            }
            return res*sign;      
    }

};