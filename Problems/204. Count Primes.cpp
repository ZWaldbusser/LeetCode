class Solution {
public:
    int countPrimes(int n) {
        if(2 >= n) {
            return 0;
        }
        //Sieve of Eratosthenes? Not space efficient but time?
        vector<int> list(n+1, -1);
        list[0] = 0; list[1] = 1;
        int p = 2;
        
        while(true) {
            int temp = p;
            while(true) {
                
                list[temp] = temp;
                if(temp+p > n) break;
                temp += p;
                
            }
            list[p] = -1;
            bool brea = true;
            for(int i = p+1; i <= n; ++i) {
                if(list[i] == -1) {
                    p = i;
                    brea = false;
                    break;
                }
            }
            if(brea) break;
        }
        int temp = 0;
        for(int i = 0; i< n; ++i) {
            if(list[i] == -1) {
                temp++;
            }
        }
        

        return temp;
    }
};