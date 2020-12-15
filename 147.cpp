ListNode* insertionSortList(ListNode* head) {
    if(!head)
        return head;
    ListNode res(0);
    auto p = head;
    while(p)
    {
        auto next = p->next;
        auto pre = &res;
        auto t = pre->next;
        while(t && t->val <= p->val)
        {
            pre = t;
            t = t->next;
        }
        if(t){
            p->next = t->next;
            t->next = p;
        } else{
            t->next = p;
        }
        p = next;
    }
    return res.next;
}