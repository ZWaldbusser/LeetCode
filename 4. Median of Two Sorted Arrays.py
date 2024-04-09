class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """

        nums1 += nums2
        nums1.sort()
        median = 0.00000
        index = len(nums1)
        if ((len(nums1) % 2) == 1):
            median = nums1[index // 2]
        else:
            median = (nums1[index // 2] + nums1[(index // 2)-1]) / 2.0
        return median