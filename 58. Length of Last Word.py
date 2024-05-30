#Implemented WITHOUT .split()
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        wordStart = False
        retVal = 0
        for i in range(1, len(s)+1):
            if s[-i] == " " and not wordStart:
                continue
            if s[-i] != " ":
                wordStart = True
                retVal += 1
            if s[-i] == " " and wordStart:
                return retVal
        return retVal