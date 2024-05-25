class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        if len(height) == 0:
            return 0

        left = 0
        right = len(height) - 1
        leftMax = height[left]
        rightMax = height[right]
        retVal = 0
        
        #Two-pointer
        while left < right:
            if leftMax < rightMax:
                left += 1
                leftMax = max(leftMax, height[left])
                retVal += max(0, leftMax - height[left])
            else:
                right -= 1
                rightMax = max(rightMax, height[right])
                retVal += max(0, rightMax - height[right])
        
        return retVal