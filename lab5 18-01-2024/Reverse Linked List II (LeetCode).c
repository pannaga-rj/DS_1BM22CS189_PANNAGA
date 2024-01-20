/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
   struct ListNode *t, *t1,*pre, *cur, *aft;
    int l = left;
    int r = right;
    t = head;
    if(l==1 && r==1)
        {
        printf("%d",head->val);
        }
    else{
        while(l-1 != 0)
        {
            t1 = t;
            t = t->next;
            l--;
        }
    
        pre = NULL;
        cur = aft = t;
        for(int i=left;i<=right;i++)
        {
            aft = aft->next;
            cur->next = pre;
            pre = cur;
            cur = aft;
        }
        t1->next = pre;
        t->next = aft;
    }
        if (left > 1) {
        return head;
    } else {
        return pre;
    }
}
