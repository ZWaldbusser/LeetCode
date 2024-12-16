class Solution(object):
    def specialArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        if nums[-1] == 0:
            return -1
        i = -1
        while len(nums) != 0:
            if len(nums) != 0 and i > nums[0]:
                nums = nums[1::]
                continue
            if i == len(nums):
                return i
            print(nums)
            
            i += 1
        return -1