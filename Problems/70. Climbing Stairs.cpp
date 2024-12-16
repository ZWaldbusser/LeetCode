class Solution {
public:
    int climbStairs(int n) {
        //Running with arr[50] beats 100% on runtime, running with arr[46] beats 36%
        int arr[50];
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;

        for(int i = 4; i <= n; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }

};