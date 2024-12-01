class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        p1 = 0
        p2 = 0
        focus = True
        retval = ""
        while p1 < len(word1) and p2 < len(word2):
            if focus:
                retval += word1[p1]
                p1 += 1
                focus = False
            else:
                retval+= word2[p2]
                p2 += 1
                focus = True

        if p1 < len(word1):
            retval += word1[p1:]
        if p2 < len(word2):
            retval += word2[p2:]
        return retval

        