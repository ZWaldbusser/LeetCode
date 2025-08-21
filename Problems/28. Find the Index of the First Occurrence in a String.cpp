class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) {
            return -1;
        }
        for (int i = 0; i <= haystack.size() - needle.size(); ++i) {
            int tracer = 0;
            while (tracer < needle.size() && haystack[i + tracer] == needle[tracer]) {
                ++tracer;
            }
            if (tracer == needle.size()) {
                return i;
            }
        }
        return -1;
    }
};