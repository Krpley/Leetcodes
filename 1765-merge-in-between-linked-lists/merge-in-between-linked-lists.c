/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    int count = 0;
    if (list1 == NULL || list2 == NULL) {
        return NULL;
    }
    struct ListNode* ptr = list1;
    struct ListNode* start = list1;
    struct ListNode* end = list1;

    while (ptr != NULL) {
        count++;
       if (count == a){
        start = ptr;
       } 
       ptr = ptr->next;
       if (count == b+1) {
        end = ptr;
       }
    }
    ptr = list2;
    start->next = list2;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = end;
    return list1;
}