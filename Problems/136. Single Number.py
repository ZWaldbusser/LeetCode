class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        intList = []
        for i in nums:
            if i in intList:
                intList.remove(i)
            else:
                intList.append(i)
        
        return intList[0]