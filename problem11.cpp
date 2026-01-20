class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int res = 0 ;
        int area = 0;
        while ( l < r ) {
            area = min(height[l] , height[r]) * (r-l);
            if (area > res)  {
                res = area;
            }

            (height[l]<=height[r])? l++ : r--;
        }

        return res;
    }
};