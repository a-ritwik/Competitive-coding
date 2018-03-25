#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

void printList(struct Node* node){
    while(node!=NULL){
        printf("%d ", node->data);
        node=node->next;
    }
    printf("\n");
}

void append(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL){
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}


Node* reverseList(Node* A){
    struct Node* prev=A;
    struct Node* current=A->next;
    struct Node* n=A->next->next;
    while(true){
        if(n->next==NULL){
            return n;
        }
        current->next=prev;
        prev=current;
        current=n;
        n=current->next;
    }
}

int main(){
  struct Node* head = NULL;
  append(&head, 1);
  append(&head, 2);
  append(&head, 3);
  append(&head, 4);
  printList(head);
  printList(reverseList(head));
  return 0;
}
