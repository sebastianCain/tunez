#include "linkedlist.h"

int main() {
  Node *list = insert_front(insert_front(insert_front(insert_front(NULL, 2), 4), 9), 7);
  print_list(list);
  free_list(list, NULL);
}
