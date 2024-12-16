class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        val = 0
        for i in nums:
            if val < 0:
                return False
            elif i > val:
                val = i
            val -= 1
        return True