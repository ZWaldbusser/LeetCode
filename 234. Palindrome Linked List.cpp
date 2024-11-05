class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::deque<int> deq;
        ListNode* temp = head;
        //Use a deq to reverse the LL
        while(temp != nullptr) {
            deq.push_front(temp->val);
            temp = temp->next;
        }
        //Check the reverse and the forwards
        while(head != nullptr) {
            if(deq.front() != head->val) {
                return false;
            }
            deq.pop_front();
            head = head->next;
        }
        return true;
    }
};