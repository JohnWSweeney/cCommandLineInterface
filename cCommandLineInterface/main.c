#include <stdio.h>
#include "singlyLinkedList.h"

void getCommands(struct node** list)
{
	// get input.
	char str[123];
	fgets(str, sizeof(str), stdin);

	// tokenize input.
	int i = 0;
	int j = 0;
	char temp[123];
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n')
		{
			temp[j] = str[i];
			++j;
		}
		else if (str[i] == ' ')
		{
			addBack(list, temp);
			memset(temp, 0, sizeof(temp));
			j = 0;
		}
		++i;
	}
	addBack(list, temp);
}

int main()
{
	printf("cCommandLineInterface v0.0.3\n\n");

	int result = 0;
	struct node* list = NULL;
	
	getCommands(&list);
	result = print(list);
	printf("result: %d\n", result);
}