struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode* temp=list1;
    struct ListNode* temp1=list2;
    int c=0;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    while(temp->next!=NULL){
        struct ListNode* temp3=temp;
        temp=temp->next;
        if (c==a-1){
            temp3->next=list2;
        }
        if (c==b){
            temp1->next=temp;
            break;
        }
        c++;
        

    }
    return list1;
}