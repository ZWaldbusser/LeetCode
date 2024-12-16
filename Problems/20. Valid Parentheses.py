class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for i in range(0, len(s)):
            
            if s[i] == "(":
                stack.append(1)
            elif s[i] == "[":
                stack.append(2)
            elif s[i] == "{":
                stack.append(3)
            elif s[i] == ")":
                if not stack:
                    return False
                if stack[-1] != 1:
                    return False
                else:
                    stack.pop(-1)
            elif s[i] == "]":
                if not stack:
                    return False
                if stack[-1] != 2:
                    return False
                else:
                    stack.pop(-1)
            elif s[i] == "}":
                if not stack:
                    return False
                if stack[-1] != 3:
                    return False
                else:
                    stack.pop(-1)
        if stack:
            return False
        return True