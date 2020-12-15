    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        ListNode l(0);
        ListNode r(0);
        int count = 0;
        auto pl = &l;
        auto pr = &r;
        auto p = head;
        while(p)
        {
            auto next = p->next;
            p->next = nullptr;
            if(count % 2)
            {
                pl->next = p;
                pl = p;
            }
            else
            {
                pr->next = p;
                pr = p;
            }
            p = next;
        }
        pl->next = r.next;
        return l.next;
    }