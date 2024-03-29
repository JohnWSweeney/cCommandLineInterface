#include "commands.h"
#include "singlyLinkedList.h"

int checkExit(struct node* list)
{
	int result = strcmp(list->command, "exit");
	if (result == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int stringCompare(char* strA, char* strB)
{
	if (strA[0] == '\0' || strB[0] == '\0') return 1; // one or more strings null.

	int i = 0;
	while (strA[i] != '\0' && strB[i] != '\0')
	{
		if (strA[i] != strB[i])
		{
			return -1;
		}
		++i;
	}
	return 0;
}

void getCommands(struct node** list)
{
	do {
		clear(list); // clear linked list.
		// get input.
		char str[123]; // input string.
		do {
			fgets(str, sizeof(str), stdin);
		} while (str[0] == '\n');

		// tokenize input.
		int i = 0; // input string index.
		int j = 0; // temp string index.
		char temp[123]; // temp string.
		while (str[i] != '\0')
		{
			if (str[i] != ' ' && str[i] != '\n')
			{
				temp[j] = str[i];
				++j;
			}
			else if (str[i] == ' ')
			{
				temp[j] = '\0';
				addBack(list, temp);
				memset(temp, 0, sizeof(temp));
				j = 0;
			}
			++i;
		}
		temp[j] = '\0';
		addBack(list, temp);
	} while (isEmpty(list));
}