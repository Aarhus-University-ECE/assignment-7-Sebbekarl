#include "stdlib.h"
#include "stack.h"

void initialize(stack *s)
{
  s->head = NULL;
}

void push(int x, stack *s)
{
  node *new_node = (node *)malloc(sizeof(node));
  new_node->data = x;
  new_node->next = s->head;
  s->head = new_node;
}

int pop(stack *s)
{
  int x = s->head->data;
  node *temp = s->head;
  s->head = s->head->next;
  free(temp);
  return x;
}

bool empty(stack *s)
{
  if (s->head == NULL)
  {
    return true;
  }
  return false;
}

bool full(stack *s)
{
  // implement full here
  return false;
}
