

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    struct  SinglyLinkedListNode* new;
    new = (struct SinglyLinkedListNode* ) malloc (sizeof(struct SinglyLinkedListNode)); 
    new -> data = data;
    new -> next = llist;
    llist = new;
    return new;
}

