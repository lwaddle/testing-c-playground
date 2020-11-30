#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
struct Node
{
	unsigned int id;
	struct Node* next;
};

int main(void)
{
	
	struct Node* head;

	// make a node
	head = malloc(sizeof(struct Node));
	head->id = 1;
	head->next = NULL;

	// make another node;
	struct Node* n1 = malloc(sizeof(struct Node));
	n1->id = 2;
	n1->next = head;

	// make original head point to n1
	head->next = n1;

	// NULL n1
	n1 = NULL;
	
	// get link to head
	//struct Node* head = malloc(sizeof(struct Node));

	//head->id = 1;
	//head->next = NULL;

	// get another node
	//struct Node* n2 = malloc(sizeof(struct Node));
	


	int* numbers = malloc(sizeof(int) * 100);


		

	return 0;
}


