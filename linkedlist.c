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


void insertafter(struct Node* head, int data, int index){
    if(head == NULL){
        printf("list is empty\n");
        return;
    }
    struct Node* newnode = createnode(data);
    if(!newnode){
        printf("memory allocation failed\n");
        return;
    }
    struct Node* temp = head;
    for(int i = 0; i < index; i++){
        if(temp->next == NULL){
            free(temp);
            return;
        }
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void insertatend(struct Node** head, int data){
    struct Node* newnode = createnode(data);
    if (*head == NULL) { // If list is empty, new node becomes head
        *head = newnode;
        return;
    }
    struct Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}


void deletestart(struct Node** head){
    if(head == NULL){
        printf("empty list\n");
        return;
    }
    *head = (*head)->next;
}

void deleteinbetween(struct Node* head, int index){
    if(head == NULL){
        printf("empty list\n");
        return;
    }
    struct Node* temp = head;
    for(int i = 0; i < index; ++i){
        if(temp->next == NULL){
            free(temp);
            return;
        }
        temp = temp->next;
    }
    temp->next = temp->next->next;

}

void reverse(struct Node** head){
    struct Node* previous = NULL;
    struct Node* current = *head;
    struct Node* forward = NULL;

    while(current != NULL){
        forward = current->next;
        previous = current->next;
        previous = current;
        current = forward;
    }
    *head = previous;
}



struct Node* merge(struct Node* head, struct Node* head1){
    if(head == NULL){
        return head1;
    }
    if(head1 == NULL){
        return head;
    }

    struct Node* sorting = NULL;
    struct Node* newhead = NULL;

    if(head->data >= head1->data){
        newhead = head1;
        head1 = newhead->next;
    }
    else{
        newhead = head;
        head = newhead->next;
    }

    sorting = newhead;

    while(head && head1){
        if(head->data >= head1->data){
            sorting->next = head1;
            head1 = head1->next;
        }
        else{
            sorting->next = head;
            head = head->next;
        }
        sorting = sorting->next;
    }

    if(head){
        sorting->next = head;
    }
    if(head1){
        sorting->next = head1;
    }

    return newhead;
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