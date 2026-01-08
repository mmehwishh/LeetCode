class Solution {
public:
    int reverse(int x) {
        const int L_MAX = 2147483647; // 2^31 - 1
        const int L_MIN = -2147483648; // -2^31
        int sol=0;
        int remainder;
        while (x!=0) {
            remainder = x%10;

            if (sol > L_MAX / 10 || (sol == L_MAX / 10 && remainder > 7))           return 0;
            if (sol < L_MIN / 10 || (sol == L_MIN / 10 && remainder < -8))          return 0;


            sol = sol*10+remainder;
            x/=10;
        }

        return sol;
    }
};