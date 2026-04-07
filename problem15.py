class Solution(object):
    def threeSum(self, nums):
        res =[]
        nums.sort()
        for i in range(len(nums)):
            num1 = nums[i]
            if i > 0 and nums[i] == nums[i-1]:
                continue
            
            left = i+1
            right = len(nums)-1
            while (left < right):
                total = num1 + nums[left] + nums[right]
                if total == 0:
                    res.append([num1 , nums[left] , nums[right]])
                    left +=1
                    right -=1
                    while left < right and nums[left] == nums[left-1]:
                        left+=1
                elif total > 0:
                    right-=1
                else:
                    left +=1
        
        return res
        




        