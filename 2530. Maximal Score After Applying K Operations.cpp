class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        std::priority_queue<int> pq;
        for(int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }
        for(int i = 0; i < k; i++) {
            int temp = pq.top();
            pq.pop();
            score += temp;
            temp = ceil(temp/3.0);
            pq.push(temp);
            
        }
        return score;
    }
};