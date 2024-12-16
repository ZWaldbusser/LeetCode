class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = set('aeiouAEIOU')
        l = list(s)
        left = 0
        right = len(s)-1
        while(left < right):
            if s[left] not in vowels:
                left += 1
            elif s[right] not in vowels:
                right -= 1
            else:
                l[left], l[right] = l[right], l[left]
                left += 1
                right -= 1
        return "".join(l)

        