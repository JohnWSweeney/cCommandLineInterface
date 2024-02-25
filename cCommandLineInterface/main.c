#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "singlyLinkedList.h"

int main()
{
	printf("cCommandLineInterface v0.0.0\n\n");

	struct node* list = NULL;
	char one[123] = "one";
	char two[123] = "two";
	char three[123] = "three";
	char four[123] = "four";

	addBack(&list, one);
	addBack(&list, two);
	addBack(&list, three);
	addBack(&list, four);
	print(list);
}