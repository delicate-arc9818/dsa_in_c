#include <stdio.h>

//creating a node
struct node{
    int data;           //node consist of 2 parts -> a value & a pointer to next node
    struct node* next;  //a pointer named next which points to some node which we haven't defined yet
};

//function to create a node
struct node* createnode(int data){  //createnode is a function of type struct node*
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(!newnode){
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

//insert at beginning
void inseratbeginning(struct node** head, int data){
    struct node* newnode = createnode(data);
    if(!newnode){
        return;
    }
    newnode->next = head;
    *head = newnode;
}

void insertionatend(struct node** head, int data){
    struct node* newnode = createnode(data);
    if(!newnode){
        return;
    }
    if(*head == NULL){
        *head = newnode;
        return;
    }
    
}

int main(){
    return 0;
}