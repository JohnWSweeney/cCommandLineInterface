#include <stdio.h>
#include "commands.h"
#include "singlyLinkedList.h"

int main()
{
	printf("cCommandLineInterface v0.0.9\n\n");

	int running = 1;
	struct node* list = NULL;
	while (running)
	{
		getCommands(&list);
		print(list);
		running = checkExit(list);
	}
	printf("Closing CLI.\n");
}