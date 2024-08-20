//Similar to a class homework assignment ive had. 
//Wanted to find a more optimal solution.
//O(n*m) time complexity, O(n+m) space complexity

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2 == "0") {
            return "0";
        }
        int n = num1.length();
        int m = num2.length();
        vector<int> temp(n+m, 0);
        for(int i = n-1; i >= 0; i--) {
            for(int j = m-1; j >= 0; j--) {
                int num = temp[i+j+1] + ((num1[i]-'0')*(num2[j]-'0'));
                temp[i+j+1] = num%10;
                temp[i+j] += num/10;
            }
        }
        string s="";
        for(int i = 0; i < temp.size(); i++) {
            if(!(s.empty() && temp[i]==0)) {
                s.push_back(temp[i]+'0');
            }
        }
        if(s.empty()) {
            return "0";
        } else {
            return s;
        }
    }
};