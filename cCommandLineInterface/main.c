#include <stdio.h>
#include "commands.h"
#include "singlyLinkedList.h"

int main()
{
	printf("cCommandLineInterface v0.0.6\n\n");

	struct node* list = NULL;
	getCommands(&list);
	print(list);
}