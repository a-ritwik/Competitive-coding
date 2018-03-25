#include<stdio.h>
#include<stdlib.h>

struct Node {
       int data;
       Node *next;
};

int lengthList(struct Node* node){
    int len=0;
    while(node!=NULL){
        len++;
        node=node->next;
    }
    return len;
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


void printList(struct Node* node){
    while(node!=NULL){
        printf("%d ", node->data);
        node=node->next;
    }
    printf("\n");
}

Node* addTwoNumbers(Node* A, Node* B){
    struct Node* C = NULL;
    int sum=0;
    int carry=0;
    while(A!=NULL || B!=NULL){
        if(A!=NULL && B!=NULL){
            sum=carry+A->data+B->data;
            if(sum>=10){
                carry=1;
            }else{
                carry=0;
            }
            append(&C, sum%10);
      //      printf("%d", sum%10);
            A=A->next;
            B=B->next;
        }
        else if(A==NULL && B!=NULL){
            sum=carry+B->data;
            if(sum>=10){
                carry=1;
            }else{
                carry=0;
            }
            append(&C, sum%10);
      //      printf("%d", sum%10);
            B=B->next;
        }
        else if(B==NULL && A!=NULL){
            sum=carry+A->data;
            if(sum>=10){
                carry=1;
            }else{
                carry=0;
            }
            append(&C, sum%10);
      //      printf("%d", sum%10);
            A=A->next;
        }

    }
    if(carry==1){
        append(&C, 1);
    }

return C;
}

int main(){
  struct Node* A = NULL;
  struct Node* B = NULL;
  append(&A, 2);
  append(&A, 4);
  append(&A, 6);
  append(&B, 9);
  append(&B, 3);
  append(&B, 1);
  printList(A);
  printList(B);
  printList(addTwoNumbers(A, B));
}
