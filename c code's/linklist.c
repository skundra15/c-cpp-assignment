#include <stdio.h>
#include <stdlib.h>



typedef struct Node {
int data;
struct Node* next;
}Node;



void reverseUtil(Node* curr, Node* prev, Node** head);



// This function mainly calls reverseUtil()
// with prev as NULL
void reverse(Node** head)
{
if (!head)
  return;
reverseUtil(*head, NULL, head);
}



// A simple and tail-recursive function to reverse
// a linked list. prev is passed as NULL initially.
void reverseUtil(Node* curr, Node* prev, Node** head)
{
/* If last node mark it head*/
if (!curr->next) {
  *head = curr;
  /* Update next to prev node */
  curr->next = prev;
  return;
}



/* Save curr->next node for recursive call */
Node* next = curr->next;
/* and update next ..*/
curr->next = prev;
reverseUtil(next, curr, head);
}



// A utility function to create a new node
Node* newNode(int key)
{
Node* temp = (Node *)malloc(sizeof(Node));
temp->data = key;
temp->next = NULL;
return temp;
}



// A utility function to print a linked list
void printlist(Node* head)
{
while (head != NULL) {
  printf("%d ",head->data);
  head = head->next;
}
printf("\n");
}



// Driver code
int main()
{
Node* head1 = newNode(11);
head1->next = newNode(23);
head1->next->next = newNode(34);
head1->next->next->next = newNode(45);
head1->next->next->next->next = newNode(58);
head1->next->next->next->next->next = newNode(69);
head1->next->next->next->next->next->next = newNode(79);
head1->next->next->next->next->next->next->next = newNode(84);
printf("Given linked list\n");
printlist(head1);
reverse(&head1);
printf("\nReversed linked list\n");
printlist(head1);
return 0;
}