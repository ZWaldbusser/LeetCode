class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        max = "2147483647"
        
        xStr = str(x)
        x = abs(x)
        negative = False
        if xStr[0] == "-":
            negative = True
            xStr = xStr[1::]
        xStr = xStr[::-1]
            
        for i in range(0, len(xStr)):
            if len(xStr) == 10 and xStr[i] < max[i]:
                break
            if len(xStr) == 10 and xStr[i] > max[i]:
                return 0
        if negative:
            return -1 * int(xStr)
        else:
            return int(xStr)
