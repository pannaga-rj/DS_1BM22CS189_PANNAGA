
 // Definition for singly-linked list.
//  struct ListNode {
//       int val;
//       struct ListNode *next;
//   };
 
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || k == 0) return head; // If the list is empty or k is 0, no rotation needed
    
    struct ListNode *t = head;
    int len = 1; // Length of the list
    
    // length of the list
    while (t->next != NULL) {
        t = t->next;
        len++;
    }
    
    // Adjust k if it's greater than the length of the list
    k = k % len;
    if (k == 0) return head; // no rotation needed
    
    t->next = head; // Connect last to first node (circular)
    
    // Traverse again to find the new last node 
    t = head;
    for (int i = 0; i < len - k - 1; i++) {
        t = t->next;
    }

    // New head after rotation
    struct ListNode *newHead = t->next; 
    t->next = NULL; // Break the circle
    
    return newHead;
}
