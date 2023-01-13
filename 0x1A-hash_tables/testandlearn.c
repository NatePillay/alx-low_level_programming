#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//providing the std input/output and memory allocation functions
//string manipulation function

#define TABLE_SIZE 256



struct Node {
	int key;
	int value;
	struct Node* next;
};

struct HashTable {
	struct Node* table[256];
};

struct HashTable* create_table(){
	struct HashTable* ht = (struct HashTable*)malloc(sizeof(struct HashTable));
	for(int i = 0; i < TABLE_SIZE; i++)
	{
		ht->table[i] = NULL;
	}
	return ht;
}

int hash_function(int key)
{
	return key % TABLE_SIZE;
}

void insert(struct HashTable* ht, int key, int value)
{
	int index = hash_function(key);
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->key = key;
	new_node->value = value;
	new_node->next = ht->table[index];
	ht->table[index] = new_node;
}

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
	
