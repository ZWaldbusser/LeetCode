class Solution {
    public:
        int numTilings(int n) {
            int modulus=1e9+7;
            vector<long long> arr(1001,0);
            arr[1]=1;
            arr[2]=2;
            arr[3]=5;
            if(n<=3) return arr[n];
            for(int i=4;i<=n;++i) {
                arr[i] = 2*arr[i-1]+arr[i-3];
                arr[i]%=modulus;
            }
            return arr[n];
        }
    };