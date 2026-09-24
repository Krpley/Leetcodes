/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    //judge values
    struct ListNode* listA = headA;
    struct ListNode* listB = headB;
    struct ListNode* intersect = NULL;
    int skipA = 0;
    int skipB = 0;
    while (listA != NULL) {
        listB = headB;
        if (listA == listB) {
            return listA;
        }
        while (listB != NULL) {
            if (listA == listB) {
                return listA;
            } else {
                skipB ++;
            }
            listB = listB->next;
        }
        listA = listA->next;
        skipA ++;
    }
    return NULL;
}