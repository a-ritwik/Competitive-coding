#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data){
    struct node* node = new(struct node);
    node->data = data;
}

void printBST(struct node* node){
    if(node==NULL){
        return;
    }
    printBST(node->left);
    cout << node->data;
    cout << " ";
    printBST(node->right);
}

int sum(struct node* node){
    if(node==NULL){
        return 0;
    }
    return node->data+sum(node->left)+sum(node->right);
}

int size(struct node* node){
    if(node==NULL){
    return 0;
    }
    return 1+size(node->left)+size(node->right);
}

int minValueLoop(struct node* node){
    int min=1000;
    while(node!=NULL){
        if(node->data<=min){
            min=node->data;
        }
        if(node==NULL){
            break;
        }
        node=node->left;
    }
    return min;
}

int maxDepth(struct node* node){
    if(node==NULL){
        return 0;
    }
    int lDepth=maxDepth(node->left);
    int rDepth=maxDepth(node->right);
    if(lDepth>rDepth) return lDepth+1;
    return rDepth+1;
}

void printPostOrder(struct node* node){
    if(node==NULL){
        return;
    }
    printPostOrder(node->left);
    printPostOrder(node->right);
    cout << node->data;
    cout << " ";
}

int main (){
    struct node* root = newNode(20);
    struct node* root1 = root->left= newNode(6);
    struct node* root2 = root->right= newNode(9);
    root1->left=newNode(10);
    root1->right=newNode(4);
    root2->left=newNode(25);
    root2->right=newNode(8);
    printPostOrder(root);
    cout<<"\n";
    return 0;
}
