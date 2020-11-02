

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    struct SinglyLinkedListNode* new;
    new = (struct SinglyLinkedListNode*) malloc (sizeof(struct SinglyLinkedListNode));
    struct SinglyLinkedListNode* last = head;
    new -> data = data;
    new -> next = NULL;
    if(head == NULL)
    {
        head = new;
    }
    else 
    {
        while(last -> next != NULL)
        {
            last = last -> next;
        }
        last -> next = new;
    }
return head;
}

