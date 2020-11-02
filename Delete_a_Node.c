

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    int i;
    if(position == 0)
    {
        struct SinglyLinkedListNode* next = head -> next;
        free(head);
        return next;
    }
    else  
    {
        struct SinglyLinkedListNode* temp = head;
        struct SinglyLinkedListNode* current = head;
        for(i = 0;i<position;i++)
        {
            current = temp;
            temp = temp -> next;
        }
        current -> next = temp -> next;
        free(temp);
        return head;
    }

}

