

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode* prev = NULL;
    struct SinglyLinkedListNode* current = head;
    struct SinglyLinkedListNode* temp = NULL;
    while(current != NULL)
    {
        temp = current -> next;
        current -> next = prev;
        prev = current;
        current = temp;
    }
    head = prev;
return head;
}

