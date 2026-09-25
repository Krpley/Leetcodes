/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    if (slow == NULL) {
        return false;
    }
    while (fast->next != NULL) {
        fast = fast->next;
        if (slow == fast) {
            return true;
        }
        slow = slow->next;
        if (fast->next != NULL) {
            fast = fast->next;
        }
    }
    return false;
}