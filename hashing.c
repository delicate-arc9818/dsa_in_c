#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

typedef struct Node{
    int key;
    int value;
    struct Node* next;
} Node;

Node* hashtable[TABLE_SIZE];

int hashfunction(int key){
    return key % TABLE_SIZE;
}

void insert(int key, int value){
    int index = hashfunction(key);
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->key = key;
    newnode->value = value;
    newnode->next = hashtable[index];
    hashtable[index] = newnode;
    printf("inserted (%d %d)\n", key, value);
}

int search(int key){
    int index = hashfunction(key);
    Node* temp = hashtable[index];
    while(temp){
        if(temp->key == key){
            return temp->value;
        }
        temp = temp->next;
    }
    return -1;
}

void deletekey(int key){
    int index = hashfunction(key);
    Node* temp = hashtable[index];
    Node* prev = NULL;

    while(temp){
        if(temp->key == key){
            if(prev){
                prev->next = temp->next;
            }
            else{
                hashtable[index] = temp->next;
            }
            free(temp);
            printf("deleted key %d\n", key);
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("key not found\n", key);

}


void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i);
        Node* temp = hashtable[i];
        while (temp) {
            printf("(%d, %d) -> ", temp->key, temp->value);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main(){
    return 0;
}