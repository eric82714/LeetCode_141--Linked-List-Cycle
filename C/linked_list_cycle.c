/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL)  return false;
    
    struct ListNode *fast = head, *slow = head;
        
    while(fast != NULL && fast->next != NULL) {       
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow) return true;
    }
    return false;
}
