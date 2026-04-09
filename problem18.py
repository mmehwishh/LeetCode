class Solution(object):
    def fourSum(self, nums, target):
        res = []
        nums.sort()
        for i in range(len(nums) - 3):
            n1 = nums[i]
            if i > 0 and nums[i] == nums[i-1]:
                continue
            n = len(nums)
            if nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target:
                break
            if nums[i] + nums[n-1] + nums[n-2] + nums[n-3] < target:
                continue
            
            for j in range(i+1 , len(nums)-2):
                n2 = nums[j]
                if j> i+1 and nums[j] == nums[j-1]:
                    continue

                if nums[j] + nums[j+1] + nums[j+2] + nums[i]> target:
                    break
                if nums[n-2] + nums[j] + nums[n-1] + nums[i]< target:
                    continue
                
                left = j+1
                right = len(nums) - 1

                while (left < right ):
                    sum_nums = n1 + nums[left] + nums[right] + n2

                    if sum_nums == target:
                        res.append([n1 , n2 , nums[left] , nums[right] ])
                        left+=1
                        right-=1
                        while left < right and nums[left] == nums[left-1]:
                            left+=1
                        while left < right and  nums[right] == nums[right+1]:
                            right-=1

                    elif sum_nums > target:
                        right-=1
                    else:
                        left+=1          
            
        return res