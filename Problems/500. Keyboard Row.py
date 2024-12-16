class Solution(object):
    def sameLine(self, char1, char2):
        l1 = "qwertyuiop"
        l2 = "asdfghjkl"
        l3 = "zxcvbnm"
        if (char1 in l1) and (char2 in l1):
            return True
        if (char1 in l2) and (char2 in l2):
            return True
        if (char1 in l3) and (char2 in l3):
            return True
        return False
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        retVal = []

        for i in words:
            flag = True
            temp = lower(i)
            for j in range(0, len(temp)-1):
                if not(self.sameLine(temp[j], temp[j+1])):
                    flag = False
                    

            if flag:
                retVal.append(i)
        return retVal