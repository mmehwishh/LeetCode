class Solution(object):
    def threeSumClosest(self, nums, target):
        res_diff = None
        res_sum = 0
        nums.sort()
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            left = i+1
            right = len(nums)-1

            while left < right:
                total = nums[i] +nums[left] + nums[right]

                if res_diff == None or res_diff > abs (target - total):
                    res_diff = abs (target - total)
                    res_sum = total

                if total == target:
                    return target
                elif total  > target:
                    right-=1
                else:
                    left+=1
        
        return res_sum
        