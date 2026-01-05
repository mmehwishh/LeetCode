class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0; int j =0;
        vector<int>num;
        while (i<nums1.size() && j<nums2.size()) {
            if(nums1[i]<=nums2[j]) {
                num.push_back(nums1[i]);
                i++;
            } else {
                num.push_back(nums2[j]);
                j++;
            }
        }
        while (i<nums1.size()) {
            num.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()) {
            num.push_back(nums2[j]);
            j++;
        }
        int n = num.size();
        if(n%2==0) {
            int sum = num[n/2] +num[(n/2)-1];
            return (double)sum/2;
        } else {
            return (double)num[n/2];
        }
        
    }
};