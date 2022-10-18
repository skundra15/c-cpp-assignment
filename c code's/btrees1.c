#include <stdio.h>
#include <stdlib.h>

struct node
{
  int item;
  struct node *left;
  struct node *right;
};

// Inorder traversal
void inorderTraversal(struct node *root)
{ // l-ro-r
  if (root == NULL)
    return;
  inorderTraversal(root->left); // ro =root ,r=right,l=left
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node *root)
{ // ro-l-r
  if (root == NULL)
    return;
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node *root)
{ // l-r-ro
  if (root == NULL)
    return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}

// Create a new Node
struct node *createNode(int value)
{
  struct node *newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
// struct node* insertLeft(struct node* root, int value) {
// root->left = createNode(value);
// return root->left;
//}

// Insert on the right of the node
// struct node* insertRight(struct node* root, int value) {
// root->right = createNode(value);
// return root->right;
//}

int main()
{
  struct node *root = createNode(1);
  root->left = createNode(2);
  root->right = createNode(3);
  root->left->left = createNode(4);
  root->left->left->left = createNode(8);
  root->left->left->left->left = createNode(16);
  root->left->left->left->right = createNode(17);
  root->left->left->right = createNode(9);
  root->left->left->right->left = createNode(18);
  root->left->left->right->right = createNode(19);
  root->left->right = createNode(5);
  root->left->right->left = createNode(10);
  root->left->right->left->left = createNode(20);
  root->left->right->left->right = createNode(21);
  root->left->right->right = createNode(11);
  root->left->right->right->left = createNode(22);
  root->left->right->right->right = createNode(23);
  root->right->left = createNode(6);
  root->right->left->left = createNode(12);
  root->right->left->left->left = createNode(24);
  root->right->left->left->right = createNode(25);
  root->right->left->right = createNode(13);
  root->right->left->right->left = createNode(26);
  root->right->left->right->right = createNode(27);
  root->right->right = createNode(7);
  root->right->right->left = createNode(14);
  root->right->right->left->left = createNode(28);
  root->right->right->left->right = createNode(29);
  root->right->right->right = createNode(15);
  root->right->right->right->left = createNode(30);
  root->right->right->right->right = createNode(31);

  // insertLeft(root, 2);
  // insertRight(root, 3);

  // insertLeft(root->left, 4);
  // insertRight(root->left, 5);
  // insertLeft(root->right,6);
  // insertRight(root->right,7);

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);
}
