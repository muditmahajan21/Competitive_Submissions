

// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* prev = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    int i;
    for(i = 0;i < (count - positionFromTail - 1);i++)
    {
        prev = prev -> next;
    }
    return prev -> data;
}

