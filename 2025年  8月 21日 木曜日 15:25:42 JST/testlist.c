#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
	char data[32];	
	struct node* next;
}Node;

void prepend(Node **head,char *data)
{
	Node *new_node = (Node*)malloc(sizeof(Node));
	strcpy(new_node->data,data);
	new_node->next = *head;
	*head = new_node;
}

void print_list(Node *head) {
  while (head != NULL) {
    printf("%s ", head->data);
    head = head->next;
  }
}

void free_list(Node *head) {
  Node *current = head;
  while (current != NULL) {
    Node *next = current->next;
    free(current);
    current = next;
  }
}

int main(void)
{
  Node *head = NULL;

  prepend(&head, "a");
  prepend(&head, "b");
  prepend(&head, "c");
  prepend(&head, "d");

    printf("List: ");
  print_list(head);

  free_list(head);
}
