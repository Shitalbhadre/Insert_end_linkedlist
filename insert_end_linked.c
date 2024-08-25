#include<stdio.h>
#include<stdlib.h>
struct Node{
      int data;
      struct Node *next;
};

void linkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("%d\n", ptr->data);
    ptr = ptr->next;
    }
}

struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main(){
       struct Node *head;
       struct Node *second;
       struct Node *third;

       head = (struct Node *)malloc(sizeof(struct Node));
       second = (struct Node *)malloc(sizeof(struct Node));
       third = (struct Node *)malloc(sizeof(struct Node));

        head->data = 7;
        head->next = second;

        second->data = 10;
        second->next = third;

        third->data = 13;
        third->next = NULL;
        
        printf("Linked list before insertion\n");
        linkedListTraversal(head);

        printf("Linked list after insertion at end\n");
        head = insertAtEnd(head,56);
        linkedListTraversal(head);

        return 0;
}