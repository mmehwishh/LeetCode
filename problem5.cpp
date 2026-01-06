// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int max = 0;
//         string res="";
//         string final;
       
//         BRUTE FORCE SOLUTION - O(n^3)
//         for(int l=0 ; l<s.length(); l++) {
//             res="";
//             for(int j =l ; j<s.length(); j++ ){
//                 res+=s[j];
//                 string temp =res;
//                  reverse(temp.begin() , temp.end());
//                 if ( temp==res && max <res.length() )  {
//                     final = res;
//                     max = res.length();
//                 } 
//             }
//         }
//         return final;
//     }
// };

//otimal solution O(n^2)
class Solution {
public:
    string longestPalindrome(string s) {
        int l,r;
        int max = 0;
        int start;

        for(int i=0 ; i<s.length(); i++) {
            l=i; r=i;
            while (l>=0 && r<s.length() && s[l]==s[r]) {
                if (r-l+1 > max ) {
                    start = l;
                    max = r-l+1;
                }
                l--; r++;
            }

            l=i; r=i+1;
            while (l>=0 && r<s.length() && s[l]==s[r]) {
                if (r-l+1 > max ) {
                    start = l;
                    max = r-l+1;
                }
                l--; r++;
            }
            
        }
        return s.substr(start , max);
    }
};