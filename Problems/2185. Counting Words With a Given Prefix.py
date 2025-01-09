class Solution(object):
    def prefixCount(self, words, pref):
        """
        :type words: List[str]
        :type pref: str
        :rtype: int
        """
        retVal = 0
        length = len(pref)
        for i in words:
            if i[:len(pref)] == pref:
                retVal += 1
        return retVal
        