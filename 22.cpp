class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        auto next = head->next;
        head->next = swapPairs(next);
        next->next = head;
        return next;
    }
};

