class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        chList = ["I", "V", "X", "L", "C", "D", "M"]
        prev = ""
        retVal = 0
        for j in reversed(range(0, len(s))):
            i = s[j]
            #Could be redone with maps. Will redo for better runtime
            if  prev == chList[1] and i == chList[0]:
                retVal -= 1
            elif  prev == chList[2] and i == chList[0]:
                retVal -= 1
            elif  prev == chList[3] and i == chList[2]:
                retVal -= 10    
            elif  prev == chList[4] and i == chList[2]:
                retVal -= 10    
            elif  prev == chList[5] and i == chList[4]:
                retVal -= 100    
            elif  prev == chList[6] and i == chList[4]:
                retVal -= 100
            elif i == chList[0]:
                retVal += 1
            elif i == chList[1]:
                retVal += 5
            elif i == chList[2]:
                retVal += 10
            elif i == chList[3]:
                retVal += 50
            elif i == chList[4]:
                retVal += 100
            elif i == chList[5]:
                retVal += 500
            elif i == chList[6]:
                retVal += 1000
            prev = i
        return retVal
        