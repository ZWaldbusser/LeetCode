class Solution(object):
    def rotateString(self, s, goal):
        for i in range(len(s)+1): 
            if s == goal:
                return True
            s = s[1:] + s[0]

        return False
