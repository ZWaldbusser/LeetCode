class Solution(object):
    def licenseKeyFormatting(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        #Remove dashes.
        s = s.replace("-", "").upper()
        n = len(s)
        first_len = n % k
        retVal = []
        #If first group is not normally sized
        if first_len:
            retVal.append(s[:first_len])
        
        for i in range(first_len, n, k):
            retVal.append(s[i:i+k])
        return "-".join(retVal)
        