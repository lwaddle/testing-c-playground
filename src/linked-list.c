#include <stdio.h>
#include <stdlib.h>

typedef struct _Node
{
	int id;
	struct _Node *next;
} Node;

void print_node_ids(Node *root)
{

	Node *n = root;

	while (n->next != NULL)
	{
		printf("Node id: %d\n", n->id);
		n = n->next;
	}

	printf("Node id: %d\n", n->id);

	
	return;

}

int main(int argc, char *argv[])
{
	Node *root;    // pointer that always points to the root of the list

	Node *n = malloc(sizeof(Node));
	n->id = 1;
	n->next = NULL;    // last node in the list

	root = n;    // make root point to the only node in the list

	n = malloc(sizeof(Node));
	n->id = 2;
	n->next = root;

	root = n;

	n = malloc(sizeof(Node));
	n->id = 3;
	n->next = root;

	root = n;

	n = NULL;

	print_node_ids(root);
	

	return 0;
}
