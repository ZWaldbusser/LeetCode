class Solution(object):
    def minLength(self, s):
        """
        :type s: str
        :rtype: int
        """
        size =  -100
        while size != len(s):
            size = len(s)
            s = s.replace("AB", "")
            s = s.replace("CD", "")

        return len(s)