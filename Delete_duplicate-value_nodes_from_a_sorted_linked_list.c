

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* next;
    if(temp == NULL)
    {
        return head;
    }
    else 
    {
        while(temp -> next != NULL)
        {
            if(temp -> data == temp -> next -> data)
            {

                next = temp -> next -> next;
                free(temp -> next);
                temp -> next = next;
            }
            else 
            {
                temp = temp -> next;
            }
        }
    }
return head;
}

