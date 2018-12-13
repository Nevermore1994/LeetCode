// 返回中间的左边的 fast = head->next; 右边的是 fast = head;
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto fast = head;
        auto slow = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
};