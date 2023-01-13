#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//providing the std input/output and memory allocation functions
//string manipulation function

#define TABLE_SIZE 256
//creates a macro that sets the size of the hash table to 256


struct Node {
	int key;
	int value;
	struct Node* next;
};
//this structure is called node, it has an integer key, integer value and a pointer to the next node in the linked list
//structure is used to handle collisions in the hash table


struct HashTable {
	struct Node* table[256];
};
//defines a structure called "HashTable" that has an array of pointers to Node structure
//size of array is defined by table size

struct HashTable* create_table(){
	struct HashTable* ht = (struct HashTable*)malloc(sizeof(struct HashTable));
	for(int i = 0; i < TABLE_SIZE; i++)
	{
		ht->table[i] = NULL;
	}
	return ht;
}
//this function creates a new hash table. It allocates memory for the table and initializes al elements in the array to NULL, it returns a pointer to newly created table

int hash_function(int key)
{
	return key % TABLE_SIZE;
}
//this function takes an integer key as input and returns an index in the table by taking the modulus of the key with the table size

void insert(struct HashTable* ht, int key, int value)
{
	int index = hash_function(key);
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->key = key;
	new_node->value = value;
	new_node->next = ht->table[index];
	ht->table[index] = new_node;
}
//this function inserts a new element into the hash table, it takes hash table, a key and a value as inouts
//it uses the hash function to determine the index of the linked list in the table where the element should be inserted
//
//it creates a new node with the key and value and adds it to the front of the linked list

int search(struct HashTable* ht, int key)
{
	int index = hash_function(key);
	struct Node* current = ht->table[index];
	while (current != NULL)
	{
		if (current->key == key)
		{
			return current -> value;
		}
		current = current->next;
	}
	return -1;
}
//its a function that searches for an element in the hash table with a given key
//it takes the hash table and a key as input
//it uses the hash function to determine the index of the linked list where the element should be
//it then traverses the linked list and returns the value of the first node with a matching key. if the element is not found, it returns -1

void delete(struct HashTable* ht, int key)
{
	int index = hash_function(key);
	struct Node* current = ht->table[index];
	struct Node* previous = NULL;
	while (current != NULL)
	{
		if (current != NULL)
		{
			if (current->key == key)
			{
				ht->table[index] = current->next;
			}
			else
			{
				previous->next = current->next;
			}
			free(current);
			return;
		}
		previous = current;
		current = current->next;
	}
}
//the function that deletes an element from the hash table with a given key
//it takes the hash table and a key as input
//it uses the hash function to determine the index of the linked list where the element should be
//it traverses the linked list, finds the element with the matching key and removes it from the list
//it also frees the memory allocated for the deleted node


//real world implementation would include addtional features such as dynamic resizing, better hash functions and collision resolution strategies
//the code above is using open addressing for collision resolution which can cause poor performance and high load factor
//hash function not well designed, it can cause collisions with keys close in value
