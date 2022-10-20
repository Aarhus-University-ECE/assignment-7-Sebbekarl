#include "stdlib.h"
#include <assert.h>
#include "stack.h"

void initialize(stack *s)
{
  // defines the head pointer to be equal to NULL
  s->head = NULL;
}

void push(int x, stack *s)
{
  node *new_node = (node *)malloc(sizeof(node)); // allocates memory for a new node
  new_node->data = x;
  new_node->next = s->head; // sets next of the new node to the current head
  s->head = new_node;       // changes the head to the new node so that it's on top
}

int pop(stack *s)
{
  assert(s->head != NULL); // assert to make sure there's something to pull out of the stack
  int x = s->head->data;   // get the data that need to be returned
  node *temp = s->head;
  s->head = s->head->next; // sets the head to the nex element in the stack
  free(temp);
  return x;
}

bool empty(stack *s)
{
  // checks if head is NULL because if so then the stack is empty
  if (s->head == NULL)
  {
    return true;
  }
  return false;
}

bool full(stack *s)
{
  // always return false because there's no condition to check if the stack is full
  // because it's dynamic and just allocates more memory
  return false;
}
