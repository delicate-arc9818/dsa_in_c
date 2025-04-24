#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    int height;
}Node;

int height(Node* node){
    if(node == NULL){
        return 0;
    }
    return node->height;
}

int balancefactor(Node* node){
    if(node == NULL){
        return 0;
    }

    return height(node->left) - height(node->right);
}

Node* rightrotate(Node* y){
    Node* x = y->left;
    Node* T2 = x->right;
   
    //perform rotation
    x->right = y;
    y->left = T2;

    //update heights;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return x;

}

Node* leftrotate(Node* x){
    Node* y = x->right;
    Node* T2 = x->left;

    //perform rotation
    y->left = x;
    x->right = T2;

    //update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;

}

Node* leftrightrotate(Node* node){
    node->left = leftrotate(node->left);
    return rightrotate(node);
}

Node* rightleftrotate(Node* node){
    node->right = rightrotate(node->right);
    return leftrotate(node);
}


Node* insert(Node* node, int value){
    if(node == NULL){
        Node* newnode = (Node*)malloc(sizeof(newnode));
        newnode->data = value;
        newnode->right = newnode->left = NULL;
        newnode->height = 1;
        return newnode;
    }


    if(value < node->data){
        node->left = insert(node->left, value);
    }

    else if(value > node->data){
        node->right = insert(node->right, value);
    }

    else{
        //duplicates are not allowed
        return node;
    }


    if(height(node->left) > height(node->right)){
        node->height = height(node->left) + 1;
    }
    else{
        node->height = height(node->right) + 1;
    }



    int balance = balancefactor(node);

    if(balance > 1 && value < node->left->data){
        return rightrotate(node);
    }

    if(balance > -1 && value < node->right->data){
        return leftrotate(node);
    }

    if(balance > 1 && value > node->right->data){
        return leftrightrotate(node);
    }

    if(balance > -1 && value > node->right->data){
        return rightleftrotate(node);
    }

    return node;
}

void inorder(Node* root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

Node* minvalue(Node* node){
    Node* current = node;
    while(current->left != NULL){
        current = current->left;
    }
    return current;
}

Node* deletenode(Node* root, int key){
    if(root == NULL){
        return root;
    }

    if(key < root->data){
        root->left = deletenode(root->left, key);
    }

    else if(key > root->data){
        root->right = deletenode(root->right, key);
    }

    else{
        if(root->left == NULL || )
    }
}