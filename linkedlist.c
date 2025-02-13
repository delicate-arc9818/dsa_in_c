#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

//case-1: insertion at beginning
struct Node* insertionatfirst(struct Node *head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr; //ptr becomes the new head
}

//case-2: insertion in between
struct Node *insertionatindex(struct Node* head, int data, int index){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    for(int i = 0; i != index - 1; i++){
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


//case-3: insertion at end
struct Node *insertatend(struct Node* head, int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    for(int i = 0; i != NULL; i++){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}



void linkedlisttraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);  //equivalent of (*ptr).data
        ptr = ptr->next;
    }
}

int main(){
    struct Node *head, *second, *third, *fourth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    /*
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;
    */

    head = createNode(7);
    second = createNode(11);
    third = createNode(41);
    fourth = createNode(66);

    head->next = second;
    second->next = third;
    third->next = fourth;



    linkedlisttraversal(head);


    //releasing memory
    struct Node*temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}