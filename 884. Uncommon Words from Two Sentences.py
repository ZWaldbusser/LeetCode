class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: List[str]
        """
        m = {}
        temp = s1.split() + s2.split()
        for i in temp:
            m[i] = m.get(i, 0) + 1
        retVal = []
        for word, count in m.items():
            if count == 1:
                retVal.append(word)
        return retVal
        