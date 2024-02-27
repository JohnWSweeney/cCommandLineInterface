#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "singlyLinkedList.h"

void getCommands(struct node** list)
{
	char input[123];
	fgets(input, sizeof(input), stdin);
	printf("%s\n", input);

	char* token = strtok(input, " ");
	while (token)
	{
		addBack(&list, token);
		token = strtok(NULL, " ");
	}
}

int main()
{
	printf("cCommandLineInterface v0.0.2\n\n");

	int result = 0;
	struct node* list = NULL;
	
	getCommands(&list);
	result = print(list);
	printf("result: %d\n", result);
}