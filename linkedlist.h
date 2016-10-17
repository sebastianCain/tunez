#include <stdlib.h>
#include <stdio.h>

struct node {
  int i;
  struct node *nxt;
};

typedef struct node Node;

void print_list(Node *n);
Node * insert_front(Node *list, int newvalue);
Node * free_list(Node *list, Node *curr);
