class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> m;
        for(int i = 0; i < 10002; i++) {
            if (head == nullptr || head->next == nullptr) {
                return false;
            }
            if(m[head]) {
                return true;
            }
            m[head]++;
            head = head->next;
        }
        return false;
    }
};