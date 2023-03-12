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




Here's the implementation of the requested function delete_dnodeint_at_index which deletes the node at the specified index index of the doubly linked list whose head node is pointed by the pointer head. The function returns 1 if the deletion is successful, otherwise, it returns -1. The index index starts from 0.

c
Copy code
/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Pointer to a pointer to the head node of a doubly linked list
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current_node, *prev_node, *next_node;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    /* Special case: Delete the first node */
    if (index == 0)
    {
        next_node = (*head)->next;
        if (next_node != NULL)
            next_node->prev = NULL;
        free(*head);
        *head = next_node;
        return (1);
    }

    /* Find the node at index */
    current_node = *head;
    for (i = 0; i < index && current_node != NULL; i++)
        current_node = current_node->next;

    /* If we could not find the node at index */
    if (current_node == NULL)
        return (-1);

    /* Delete the node */
    prev_node = current_node->prev;
    next_node = current_node->next;
    if (prev_node != NULL)
        prev_node->next = next_node;
    if (next_node != NULL)
        next_node->prev = prev_node;
    free(current_node);

    return (1);
}
Explanation of the function:

First, we declare three pointer variables current_node, prev_node, and next_node. We also declare an integer variable i to be used in the loop later.

We check if the pointer to the head node head or the head node itself is NULL. If either of them is NULL, we return -1 indicating that the deletion failed.

If the index index is 0, we delete the first node of the list. We update the prev pointer of the second node (if it exists) to NULL, free the memory of the first node, and update the head pointer to point to the second node (if it exists). Then, we return 1 indicating that the deletion was successful.

If the index index is not 0, we need to find the node at index index of the list so that we can delete it. We start from the head node and iterate through the list until we reach the node at index index or the end of the list, whichever comes first.

If we could not find the node at index index, we return -1 indicating that the deletion failed.

If we found the node at index index, we update the prev and next pointers of the adjacent nodes to link them with each other and delete the current node.

Finally, we free the memory of the current node and return 1 indicating that the deletion was successful.





To find the largest palindrome made from the product of two 3-digit numbers, we need to iterate through all possible pairs of 3-digit numbers, multiply them, and check if the result is a palindrome. We can then keep track of the largest palindrome we find.

Here's the Python code to implement the above approach:

python
Copy code
def is_palindrome(n):
    """
    Returns True if the number n is a palindrome, False otherwise
    """
    return str(n) == str(n)[::-1]

largest_palindrome = 0

for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

print("The largest palindrome made from the product of two 3-digit numbers is:", largest_palindrome)
In the code above, we define a helper function is_palindrome that returns True if the number n is a palindrome, False otherwise. We then initialize the variable largest_palindrome to 0.

We then iterate through all possible pairs of 3-digit numbers using two nested for loops. For each pair, we multiply them to get the product, check if the product is a palindrome using the is_palindrome function, and update the value of largest_palindrome if the product is a palindrome and is greater than the current value of largest_palindrome.

Finally, we print out the value of largest_palindrome which gives us the answer to the problem.

