

      Node* insert(Node *head,int data)
      {
          //Complete this method
                    Node* newhead = new Node(data);
          if(head != NULL) {
              Node *current = head;
              while(current->next != NULL) {
                  current = current->next;
              }
              current->next = newhead;
              return head;
          } else {
              return newhead;
          }
      }
      

