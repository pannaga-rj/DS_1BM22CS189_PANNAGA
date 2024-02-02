/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
struct ListNode** splitListToParts(struct ListNode* head, int k, int* returnSize){
    struct ListNode **arr = (struct ListNode*)calloc(k+1,sizeof(struct ListNode));
    int size = 0 ;
    struct ListNode *ptr = head , *next ;
    *returnSize = k; int i = 0;
    while(ptr){
        size++;
        ptr = ptr->next;
    }
        ptr = head ;
        int j = 0 , col;
        
        while(ptr && i<k && size){
            col = size%(k-i) == 0 ? size / (k-i) : size / (k-i) +1;
            size-= col;
            head = ptr;
            j = 0;
            while(ptr && j<col-1){ 
                ptr= ptr->next;
                j++;
            }
            next = ptr->next;
            arr[i++] = head , ptr->next = NULL;
            ptr = next;
        }
    return arr;
}
