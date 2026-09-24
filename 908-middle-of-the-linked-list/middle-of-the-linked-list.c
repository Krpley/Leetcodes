/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    //Create two pointers to go through the data, once the fast pointer reaches the end, we know the middle has been found
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    //Loop through until we find where the end is
    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        //Check for null pointer, possible for fast to be null before going to the next again.
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    return slow;
}