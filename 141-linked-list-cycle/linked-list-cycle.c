/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    //Create two nodes to go through the list at different speeds
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    //Handle possible null and single lists with while statement
    while (fast != NULL && fast->next != NULL) {
        //Move slow up by 1
        slow = slow->next;
        //Move fast up by 2
        fast = fast->next->next;
        //if they have a similar memory address then there must be a cycle
        if (slow == fast) {
            return true;
        }
    }
    return false;
}