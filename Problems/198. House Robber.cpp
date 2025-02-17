class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            if(n == 1) return nums[0];
            if(n == 2) return max(nums[0],nums[1]);
            if(n == 3) return max(nums[0]+nums[2],nums[1]);
            vector<int> m;
            m.push_back(nums[0]);
            m.push_back(nums[1]);
            m.push_back(nums[0]+nums[2]);
            for(int i = 3; i < n; ++i) {
                m.push_back(nums[i]+max(m[i-3],m[i-2]));
            }
            return(max(m[n-2],m[n-1]));
    
        }
    };