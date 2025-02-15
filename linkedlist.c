#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createnode(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode == NULL){
        printf("memory allocation failed\n");
        return NULL;
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void traverselist(struct Node* head){
    struct Node* current = head;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("NULL\n");

}

struct Node* searchkey(struct Node* head, int key){
    struct Node* current = head;
    while(current->data != NULL){
        if(current->data == key){
            return current;
        }
        current = current->next;
    }
    return NULL;
}


void insertionatstart(struct Node** head, int data){
    struct Node* newnode = createnode(data);
    newnode->next = head;
    head = newnode;
}


void insertafter(struct Node* previous, int data){
    struct Node* newnode = createnode(data);
    if(previous == NULL){
        printf("previous node cant be null\n");
        return;
    }
    newnode->next = previous->next;
    previous->next = newnode;
}

int main(){
    struct Node* head = createnode(10);
    struct Node* second = createnode(20);
    struct Node* third = createnode(30);

    head->next = second;
    second->next = third;


    printf("Linked list\n");
    traverselist(head);
    return 0;
}