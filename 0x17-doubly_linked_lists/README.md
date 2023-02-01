:set paste
A doubly linked list is a data structure that consists of a list of elements, where each element has a reference to the previous and the next element. Here's an example of a doubly linked list in C:

cpp
Copy code
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *prev;
  struct Node *next;
};

int main() {
  // Create the first node
  struct Node *head = (struct Node *)malloc(sizeof(struct Node));
  head->data = 1;
  head->prev = NULL;
  head->next = NULL;

  // Create the second node
  struct Node *second = (struct Node *)malloc(sizeof(struct Node));
  second->data = 2;
  second->prev = head;
  second->next = NULL;
  head->next = second;

  // Create the third node
  struct Node *third = (struct Node *)malloc(sizeof(struct Node));
  third->data = 3;
  third->prev = second;
  third->next = NULL;
  second->next = third;

  // Print the linked list
  struct Node *ptr = head;
  while (ptr != NULL) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }

  return 0;
}
In this example, each node in the doubly linked list is represented by a structure Node that contains three fields:

data: The data stored in the node.
prev: A pointer to the previous node in the list.
next: A pointer to the next node in the list.
The pointers prev and next are used to link the nodes together, forming the linked list. The first node in the list is referred to as the head of the list, and its prev field is NULL to indicate that there is no previous node. The last node in the list has its next field set to NULL to indicate the end of the list.



Adding a new node 
Here's an implementation of a function that adds a new node at the beginning of a dlistint_t list in C:

cpp
Copy code
#include <stdlib.h>
#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));

    if (!new)
        return NULL;

    new->n = n;
    new->prev = NULL;
    new->next = *head;

    if (*head)
        (*head)->prev = new;

    *head = new;

    return new;
}
The add_dnodeint function takes a double pointer to the head of the linked list head and an integer n to be added to the new node. The function first allocates memory for the new node using malloc and checks if the allocation was successful. If not, the function returns NULL.

The function then sets the fields of the new node:

n is set to the value of n.
prev is set to NULL since the new node is being added at the beginning of the list.
next is set to the current value of *head, which is the original head of the list.
If *head is not NULL (i.e., if the list was not empty), the prev field of the original head of the list is set to the new node. Finally, the head of the list is updated to the new node, and a pointer to the new node is returned.




