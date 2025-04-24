#include <stdio.h>
#include <stdlib.h>

// typedef struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;
// }Node;

// Node* createnode(int data){
//     Node* newnode = (Node*)malloc(sizeof(Node));
//     if(!newnode){
//         printf("memory allocation failed\n");
//         return NULL;
//     }

//     newnode->data = data;
//     newnode->left = NULL;
//     newnode->right = NULL;

//     return newnode;
// }

// Node* insert(Node* root, int data){
//     if(root == NULL){
//         return createnode(data);
//     }

//     if(data < root->data){
//         root->left = insert(root->left, data);
//     }

//     else if(data > root->data){
//         root->right = insert(root->right, data);
//     }

//     return root;
// }

// Node* search(Node* root, int key){
//     if((root == NULL) || (root->data == key)){
//         return root;
//     }

//     if(root->data < key){
//         return search(root->right, key);
//     }
//     else if(root->data > key){
//         return search(root->left, key);
//     }
// }

// Node* findmin(Node* root){
//     while(root->left != NULL){
//         root = root->left;
//     }
//     return root;
// }

// Node* findmax(Node* root){
//     while(root->right != NULL){
//         root = root->right;
//     }
//     return root;
// }

// Node* deletenode(Node* root, int key){
//     if(root == NULL){
//         return root;
//     }

//     if(key < root->data){
//         return deletenode(root->left, key);
//     }
    
//     else if(key > root->right){
//         return deletenode(root->right, key);
//     }

//     else{
//         if (root->left == NULL) {
//             struct Node* temp = root->right;
//             free(root);
//             return temp;
//         }
//         else if (root->right == NULL) {
//             struct Node* temp = root->left;
//             free(root);
//             return temp;
//         }

//         Node* temp = findMin(root->right);
//         root->data = temp->data;
//         root->right = deleteNode(root->right, temp->data);
//     }

//     return root;
// }


// void inorder(struct Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }

//struct,createnode,insert,search,findmin,delete,inorder

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node* createnode(int data){
    Node* newnode = (Node*)malloc(sizeof(Node));
    if(!newnode){
        printf("Memory allocation failed\n");
        return NULL;
    }

    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

Node* insert(Node* root, int key){
    if(root == NULL){
        return createnode(key);
    }

    if(key < root->data){
        root->left = insert(root->left, key);
    }

    else if(key > root->data){
        root->right = insert(root->right, key);
    }

    return root;
}

Node* search(Node* root, int key){
    if(root == NULL || key == root->data){
        return root;
    }

    if(key < root->data){
        return search(root->left, key);
    }

    else if(key > root->data){
        return search(root->right, key);
    }

}

Node* findmin(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

Node* delete(Node* root, int key){
    if(root == NULL){
        return NULL;
    }

    if(key < root->data){
        root->left = delete(root->left, key);
    }

    else if(key > root->data){
        root->right = delete(root->right, key);
    }

    else{

        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }

        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }


        Node* temp = findmin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }

    return root;
}

void inorder(Node* root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}