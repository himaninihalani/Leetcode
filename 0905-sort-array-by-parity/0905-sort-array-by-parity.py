class Solution:

    def swap (self,nums, a,b):
        nums[a], nums[b] = nums[b], nums[a]
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        increament =0
        for i in range (len(nums)):
            if nums[i]%2==0:
                self.swap (nums,increament,i)
                increament +=1
        return nums