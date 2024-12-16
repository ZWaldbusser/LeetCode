class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //Maps practice
        map<ListNode*, int> m;
        while(headA != nullptr) {
            m[headA] = 1;
            headA = headA->next;
        }
        while(headB != nullptr) {
            if(m[headB] == 1) { // will return the first matching node
                return headB;
            }
            headB = headB->next;
        }
        return nullptr;
    }
};