#include "linkedlist.h"

void print_list(Node *n) {
  if (n->nxt != NULL) {
    printf("%d, ", n->i);
    print_list(n->nxt);
  } else {
    printf("%d\n", n->i);
  }
}

Node * insert_front(Node *list, int newvalue) {
  Node *n = malloc(sizeof(list));
  n->nxt = list;
  n->i = newvalue;
  return n;
}

Node * free_list(Node *list, Node *curr) {
  if (curr == NULL) {
    curr = list;
  }
  if (curr->nxt == NULL) {
    return list;
  } else {
    free(curr);
    printf("freeing node: %d\n", curr->i);
    return free_list(list, curr->nxt);
  }
}
