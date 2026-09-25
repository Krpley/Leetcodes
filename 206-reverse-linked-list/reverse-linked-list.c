/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* l1 = head->next;
    struct ListNode* prev = head;

    head->next = NULL;

    while (l1 != NULL && prev != NULL) {
        struct ListNode* next = l1->next;
        l1->next = prev;
        prev = l1;
        l1 = next;
    }

    return prev;
}