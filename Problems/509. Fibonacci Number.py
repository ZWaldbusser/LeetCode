class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        l = []
        for i in range(0, n+1):
            if 2 > i:
                l.append(i)
            else:
                l.append(l[i-1] + l[i-2])
        return l[n]
            

        