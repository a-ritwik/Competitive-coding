#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

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

void printList(struct Node* node){
    while(node!=NULL){
        printf("%d ", node->data);
        node=node->next;
    }
    printf("\n");
}

Node* swap(Node* A){
    if(A==NULL || A->next==NULL){
        return A;
    }
    struct Node* prev=A;
    struct Node* current=A->next;
    A=A->next;
    while(true){
        struct Node* next=current->next;
        current->next=prev;
        if(next==NULL || next->next==NULL){
            prev->next=next;
            break;
        }
        prev->next=next->next;
        prev=next;
        current=next->next;

    }
    return A;

}

int main(){
  struct Node* head = NULL;
  append(&head, 1);
  append(&head, 2);
  append(&head, 3);
  append(&head, 4);
  append(&head, 5);
  append(&head, 6);
  append(&head, 7);
  printList(head);
  printList(swap(head));
  return 0;
}
