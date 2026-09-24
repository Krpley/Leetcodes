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
    int aCount = 0;
    int bCount = 0;
    int countDiff;

    //Perform a double walk of both lists to count how long each list is
    while (listA != NULL || listB != NULL) {
        //Check for intersection
        if (listA == listB && listA != NULL) {
            return listA;
        }
        //Move onto next pointers and increase count, if one is null stop counting
        if (listA != NULL) {
            listA = listA->next;
            aCount++;
            skipA ++;
        }
        if (listB != NULL) {
            listB = listB->next;
            bCount ++;
            skipB ++;
        }
    }

    //reset variables
    skipA = 0;
    skipB = 0;
    listA = headA;
    listB = headB;

    //Account for possible offsets in the lists
    if (aCount >= bCount) {
        aCount -= bCount;
        for (int i = 0; i < aCount; i++) {
            listA = listA->next;
        }
    } else {
        bCount -= aCount;
        for (int i = 0; i < bCount; i++) {
            listB = listB->next;
        }
    }

    //Now that offsets are accounted for, loop again and look for intersection
    while (listA != NULL && listB != NULL) {
        if (listA == listB) {
            return listA;
        } else {
            skipA ++;
            skipB++;
            listA = listA->next;
            listB = listB->next;
        }
    }

    return NULL;
}