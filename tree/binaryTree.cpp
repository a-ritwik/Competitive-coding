#include <iostream>
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
  node->left = NULL;
  node->right = NULL;
  return(node);
}

int maxDepth( struct node* node){
  if (node==NULL)  {
    return(0);
  }
  else {
    int lDepth = maxDepth(node->left);
    int rDepth = maxDepth(node->right);
    if (lDepth > rDepth) return(lDepth+1);
    else return(rDepth+1);
  }
}

int size(struct node* node) {
  if (node==NULL) {
    return(0);
  } else {
    return(size(node->left) + 1 + size(node->right));
  }
}

void printTree(struct node* node) {
  if (node == NULL) return;

  cout << node->data;
  printTree(node->left);
  printTree(node->right);
}

int main (){
   struct node* root = newNode(1);
   root->left = newNode(2);
   root->right = newNode(3);
   printTree(root);
   cout<<"\n";
   return 0;
}
