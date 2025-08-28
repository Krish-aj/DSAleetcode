/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head==NULL) return NULL;
    struct ListNode *temp = head->next;
    struct ListNode *prev = head;

    while (temp != NULL) {
        if (temp->val == prev->val) {
            temp = temp->next;
            prev->next = temp;
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}
