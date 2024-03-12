#include <stdio.h>
#include "commands.h"
#include "singlyLinkedList.h"

int main()
{
	printf("cCommandLineInterface v0.0.12\n\n");

	int running = 1;
	struct node* list = NULL;
	while (running)
	{
		getCommands(&list);
		print(list);
		running = stringCompare(list->command, "exit");
	}
	printf("Closing CLI.\n");
}