class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair<int , int>> arr;
        for (int i =0 ; i<nums.size() ; i++) {
            arr.push_back({nums[i] , i});
        }
        sort(arr.begin() , arr.end()); //nlogn
        int left = 0;
        int right = nums.size()-1;
        //n
        while (left<right) {
            if(arr[left].first + arr[right].first > target ) {
                right--;
            } else if (arr[left].first + arr[right].first < target ) {
                left++;
            } else {
                return {arr[left].second , arr[right].second};
            }
        }
        return {};
    }
};