

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    struct SinglyLinkedListNode* new;
    new = (struct SinglyLinkedListNode* ) malloc (sizeof(struct SinglyLinkedListNode));
    new -> data = data;
    
    if (head == NULL)
    {
        new -> next = NULL;
        return new;
    }
    if(position == 0)
    {
        new -> next = head;
        head = new;
        return head;
    }
    else  
    {
        struct SinglyLinkedListNode* temp;
        temp = head;
        while(position - 1 > 0)
        {
            temp = temp -> next;
            position--;
        }
        new -> next = temp -> next;
        temp -> next =  new;
        return head;
    }
}

